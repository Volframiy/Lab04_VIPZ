#include "fordelete.h"
#include "ui_fordelete.h"

extern List * pHead;
extern int CheckSave;

ForDelete::ForDelete(MainWindow *parent) :
    QDialog(),
    ui(new Ui::ForDelete)
{
    ui->setupUi(this);

    mw = parent;
    ui->label_3->hide();
}

ForDelete::~ForDelete()
{
    delete ui;
}

void ForDelete::on_OpenButton_4_clicked()
{
    close();
}

void ForDelete::on_DeleteAll_clicked()
{
    if (pHead == nullptr)
    {
        return;
    }

    QMessageBox :: StandardButton mesg = QMessageBox :: question(this , "Question about delete" , "Do you want delete all books?" , QMessageBox :: Yes | QMessageBox :: No );

    if(mesg == QMessageBox :: No)
    {
        return;
    }

    pHead->FreeList();
    pHead = nullptr;

    for (int i = 0 ; i < mw->ui->TableBook->rowCount() ; i++ )
    {
        for (int j = 0 ; j < mw->ui->TableBook->columnCount() ; j++ )
        {
            if(mw->ui->TableBook->item(i , j) != nullptr)
                delete mw->ui->TableBook->item(i , j);
        }
    }

    mw->ui->TableBook->setRowCount(0);

    close();

    CheckSave = 1;
}

void ForDelete::on_DeleteIndex_clicked()
{
    if (pHead == nullptr)
    {
        ui->label_3->show();
        ui->label_4->setText("List is empty. Fill his");
        return;
    }

    List* pTemp = pHead;
    List* pPrevTemp = nullptr;
    int temp = 1 , n = ui->IndexEdit->text().toInt();

    if(n <= 0 || n > mw->ui->TableBook->rowCount())
    {
        ui->label_3->show();
        ui->label_4->setText("Incorrect input index. Try again");
        return;
    }

    pPrevTemp = pTemp;
    pTemp = pTemp->GetNext();

    while (pTemp)
    {
        temp++;
        if (pTemp->GetNext())
        {
            pPrevTemp = pTemp;
        }
        pTemp = pTemp->GetNext();
    }

    if (n > temp || n < 0)
    {
        close();
        return;
    }

    if (n == 1)
    {
        List* pTemp = pHead;
        pHead = pHead->GetNext();
        delete pTemp;
    }
    else if (n == temp)
    {
        pPrevTemp->SetNext(nullptr);
        delete pPrevTemp->GetNext();
    }
    else
    {
        pTemp = pHead;
        for (int i = 2; i < n; i++)
        {
            pTemp = pTemp->GetNext();
        }
        pPrevTemp = pTemp->GetNext();
        pTemp->SetNext((pTemp->GetNext())->GetNext());
        delete pPrevTemp;
    }

    for (int i = 0 ; i < mw->ui->TableBook->rowCount() ; i++ )
    {
        for (int j = 0 ; j < mw->ui->TableBook->columnCount() ; j++ )
        {
            if(mw->ui->TableBook->item(i , j) != nullptr)
                delete mw->ui->TableBook->item(i , j);
        }
    }

    pTemp = pHead;
    int count = 1;

     mw->ui->TableBook->setRowCount(0);

    while (pTemp)
    {
        mw->ui->TableBook->setRowCount(count);

        QTableWidgetItem * item1 = new QTableWidgetItem(pTemp->GetSurname()) , *item2 = new QTableWidgetItem(pTemp->GetName()) , *item3 = new QTableWidgetItem(pTemp->GetBookName());
        QTableWidgetItem * item4 = new QTableWidgetItem(QString :: number(pTemp->GetYear())) , *item5 = new QTableWidgetItem(QString :: number(pTemp->GetPages()));
        QTableWidgetItem *item6 = new QTableWidgetItem(QString :: number(pTemp->GetPrice()));

        mw->ui->TableBook->setItem(count - 1 , 0 , item1);
        mw->ui->TableBook->setItem(count - 1 , 1 , item2);
        mw->ui->TableBook->setItem(count - 1 , 2 , item3);
        mw->ui->TableBook->setItem(count - 1 , 3 , item4);
        mw->ui->TableBook->setItem(count - 1 , 4 , item5);
        mw->ui->TableBook->setItem(count - 1 , 5 , item6);

        count++;
        pTemp = pTemp->GetNext();
    }

    close();
    CheckSave = 1;
    mw->ui->InfoLabel->setText("Book delete");
}

void ForDelete::on_DeleteCondition_clicked()
{
    if (pHead == nullptr)
    {
        return;
    }

    QMessageBox :: StandardButton mesg = QMessageBox :: question(this , "Question about delete" , "Do you want delete books?" , QMessageBox :: Yes | QMessageBox :: No );

    if(mesg == QMessageBox :: No)
    {
        return;
    }

    QString Check;

    while (pHead)
    {
        Check = pHead->GetSurname();

        if (Check[0].toUpper() == 'A' || Check[0].toUpper() == 'B'||
            Check[0].toUpper() == 'C' || Check[0].toUpper() == 'D')
        {
            List* pTemp = pHead;
            pHead = pHead->GetNext();
            delete pTemp;

            continue;
        }
        break;
    }

    if (pHead == nullptr)
    {
        for (int i = 0 ; i < mw->ui->TableBook->rowCount() ; i++ )
        {
            for (int j = 0 ; j < mw->ui->TableBook->columnCount() ; j++ )
            {
                if(mw->ui->TableBook->item(i , j) != nullptr)
                    delete mw->ui->TableBook->item(i , j);
            }
        }

        mw->ui->TableBook->setRowCount(0);

        close();
        return;
    }

    List* pRun = pHead , *pTemp = pRun;
    pRun = pRun->GetNext();

    while (pRun)
    {
        Check = pRun->GetSurname();

        if ((Check[0].toUpper() == 'A' || Check[0].toUpper() == 'B'||
            Check[0].toUpper() == 'C' || Check[0].toUpper() == 'D') && pRun->GetNext() == nullptr)
        {
             pTemp->SetNext(nullptr);
             delete pRun;
             break;
        }
        if (Check[0].toUpper() == 'A' || Check[0].toUpper() == 'B'||
            Check[0].toUpper() == 'C' || Check[0].toUpper() == 'D')
        {
            pTemp->SetNext(pRun->GetNext());
            delete pRun;
            pRun = pTemp->GetNext();
            continue;
        }

        pTemp = pTemp->GetNext();
        pRun = pTemp->GetNext();
    }

    for (int i = 0 ; i < mw->ui->TableBook->rowCount() ; i++ )
    {
        for (int j = 0 ; j < mw->ui->TableBook->columnCount() ; j++ )
        {
            if(mw->ui->TableBook->item(i , j) != nullptr)
                delete mw->ui->TableBook->item(i , j);
        }
    }

    pTemp = pHead;
    int count = 1;

    while (pTemp)
    {
        mw->ui->TableBook->setRowCount(count);

        QTableWidgetItem * item1 = new QTableWidgetItem(pTemp->GetSurname()) , *item2 = new QTableWidgetItem(pTemp->GetName()) , *item3 = new QTableWidgetItem(pTemp->GetBookName());
        QTableWidgetItem * item4 = new QTableWidgetItem(QString :: number(pTemp->GetYear())) , *item5 = new QTableWidgetItem(QString :: number(pTemp->GetPages()));
        QTableWidgetItem *item6 = new QTableWidgetItem(QString :: number(pTemp->GetPrice()));

        mw->ui->TableBook->setItem(count - 1 , 0 , item1);
        mw->ui->TableBook->setItem(count - 1 , 1 , item2);
        mw->ui->TableBook->setItem(count - 1 , 2 , item3);
        mw->ui->TableBook->setItem(count - 1 , 3 , item4);
        mw->ui->TableBook->setItem(count - 1 , 4 , item5);
        mw->ui->TableBook->setItem(count - 1 , 5 , item6);

        count++;
        pTemp = pTemp->GetNext();
    }

    close();
    CheckSave = 1;
    mw->ui->InfoLabel->setText("Books delete");
}
