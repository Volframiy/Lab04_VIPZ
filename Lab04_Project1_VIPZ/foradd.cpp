#include "foradd.h"
#include "ui_foradd.h"

extern List * pHead;
extern int CheckSave;

ForAdd::ForAdd(MainWindow *parent) :
    QDialog(),
    ui(new Ui::ForAdd)
{
    ui->setupUi(this);

    mw = parent;
    ui->label_3->hide();
}

ForAdd::~ForAdd()
{
    delete ui;
}


void ForAdd::on_CancelButton_clicked()
{
    close();
}

void ForAdd::on_RulesButton_clicked()
{
    Info * info = new Info();
    info->exec();
    delete info;
}

void ForAdd::on_AddButton_clicked()
{
    ui->label_3->hide();

    List* pNew = new List();

    pNew->SetSurname(ui->SurnameEdit->text());
    pNew->SetName(ui->NameEdit->text());
    pNew->SetBookName(ui->BookNameEdit->text());
    pNew->SetYear(ui->YearEdit->text().toInt());
    pNew->SetPages(ui->PagesEdit->text().toInt());
    pNew->SetPrice(ui->PriceEdit->text().toInt());

    if(!pNew->GetYear() || !pNew->GetPages() || !pNew->GetPrice())
    {
        ui->label_4->setText("Incorrect number entry. Please try again without using the letters");
        ui->label_3->show();
        return;
    }

    if(pNew->GetSurname().isEmpty() || pNew->GetName().isEmpty() || pNew->GetBookName().isEmpty())
    {
        ui->label_4->setText("Incorrect input of words. Please fill in the fields");
        ui->label_3->show();
        return;
    }

    for (int j = 0 ; j < 2 ; j++ )
    {
        QString str;

        if(j == 0)
             str = pNew->GetSurname();
        else
             str = pNew->GetName();

        for (int i = 0 ; i < str.size() ; i++ )
        {
            if(str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' ||
               str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' )
            {
                ui->label_4->setText("Incorrect input of words. Please try again without using numbers");
                ui->label_3->show();
                return;
            }
        }

    }

    if(!pHead)
    {
        pHead = pNew;

        mw->ui->TableBook->setRowCount(1);

        QTableWidgetItem * item1 = new QTableWidgetItem(pHead->GetSurname()) , *item2 = new QTableWidgetItem(pHead->GetName()) , *item3 = new QTableWidgetItem(pHead->GetBookName());
        QTableWidgetItem * item4 = new QTableWidgetItem(QString :: number(pHead->GetYear())) , *item5 = new QTableWidgetItem(QString :: number(pHead->GetPages()));
        QTableWidgetItem *item6 = new QTableWidgetItem(QString :: number(pHead->GetPrice()));

        mw->ui->TableBook->setItem(0 , 0 , item1);
        mw->ui->TableBook->setItem(0 , 1 , item2);
        mw->ui->TableBook->setItem(0 , 2 , item3);
        mw->ui->TableBook->setItem(0 , 3 , item4);
        mw->ui->TableBook->setItem(0 , 4 , item5);
        mw->ui->TableBook->setItem(0 , 5 , item6);

        close();
        return;

    }

    int n = pHead->AddList(pNew);

    if(n == 0)
    {
        pNew->SetNext(pHead);
        pHead = pNew;
    }
    else if(n == -1)
    {
        List* pTemp = pHead;

        while (pTemp->GetNext() != nullptr)
        {
            pTemp = pTemp->GetNext();
        }

        pTemp->SetNext(pNew);
    }
    else
    {
        List* pTemp = pHead;

        for (int i = 1; i < n ; i++ )
        {
            pTemp = pTemp->GetNext();
        }

        pNew->SetNext(pTemp->GetNext());
        pTemp->SetNext(pNew);
    }

    for (int i = 0 ; i < mw->ui->TableBook->rowCount() ; i++ )
    {
        for (int j = 0 ; j < mw->ui->TableBook->columnCount() ; j++ )
        {
            if(mw->ui->TableBook->item(i , j) != nullptr)
                delete mw->ui->TableBook->item(i , j);
        }
    }

    List* pTemp = pHead;
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

    CheckSave = 1;
    mw->ui->InfoLabel->setText("Book add");

    close();
}
