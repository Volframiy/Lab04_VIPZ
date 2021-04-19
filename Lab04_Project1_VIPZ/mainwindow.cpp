#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "foradd.h"
#include "fordelete.h"
#include "list.h"
#include "sortwindow.h"

List* pHead = nullptr;
QString FileName = "";
int CheckSave = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->TableBook->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->TableBook->setSelectionMode(QAbstractItemView::NoSelection);

    ui->TableBook->setColumnCount(6);
    ui->TableBook->setRowCount(0);

   ui->TableBook->horizontalHeader()->setStyleSheet("color : rgb(145, 145, 34)");
   ui->TableBook->verticalHeader()->setStyleSheet("color : rgb(145, 145, 34)");


    QTableWidgetItem * item1 = new QTableWidgetItem("Surname") , *item2 = new QTableWidgetItem("Name") , *item3 = new QTableWidgetItem("Bookname");
    QTableWidgetItem * item4 = new QTableWidgetItem("Year") , *item5 = new QTableWidgetItem("Pages") , *item6 = new QTableWidgetItem("Price");

    ui->TableBook->setHorizontalHeaderItem(0 , item1);
    ui->TableBook->setHorizontalHeaderItem(1 , item2);
    ui->TableBook->setHorizontalHeaderItem(2 , item3);
    ui->TableBook->setHorizontalHeaderItem(3 , item4);
    ui->TableBook->setHorizontalHeaderItem(4 , item5);
    ui->TableBook->setHorizontalHeaderItem(5 , item6);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fill_list(QString StrTemp , QStringList Lexsema , int count)
{
    List* pTemp = pHead;
    List * pNew = new List();

    for (int j = 2; j < count ; j++ )
    {
        pTemp = pTemp->GetNext();
    }

    for (int i = 0 ; i < 6 ; i++ )
    {
        StrTemp = Lexsema.takeAt(0);

        QTableWidgetItem * item = new QTableWidgetItem(StrTemp);
        ui->TableBook->setItem(count - 1 , i , item);

        if(i == 0)
            pNew->SetSurname(StrTemp);
        else if(i == 1)
            pNew->SetName(StrTemp);
        else if(i == 2)
            pNew->SetBookName(StrTemp);
        else if(i == 3)
            pNew->SetYear(StrTemp.toInt());
        else if(i == 4)
            pNew->SetPages(StrTemp.toInt());
        else if(i == 5)
            pNew->SetPrice(StrTemp.toInt());
    }

    if(!pHead)
    {
        pHead = pNew;
    }
    else
    {
        pTemp->SetNext(pNew);
    }
}


void MainWindow::on_AddButton_clicked()
{
    ui->InfoLabel->setText("");
    ForAdd * foradd = new ForAdd(this);
    foradd->exec();
    delete  foradd;
}

void MainWindow::on_DeleteButton_clicked()
{
    ui->InfoLabel->setText("");
    ForDelete * fordelete = new ForDelete(this);
    fordelete->exec();
    delete fordelete;
}

void MainWindow::on_InfoButton_clicked()
{
    ui->InfoLabel->setText("");
    Info * info = new Info();
    info->exec();
    delete info;
}

void MainWindow::on_OpenButton_clicked()
{
    ui->InfoLabel->setText("");

   if(CheckSave)
   {
       QMessageBox :: StandardButton mesg = QMessageBox :: question(this , "Question about open" , "Do you want close not save file?" , QMessageBox :: Yes | QMessageBox :: No );

       if(mesg == QMessageBox :: No)
       {
           return;
       }
   }

    QString StrFile = QFileDialog :: getOpenFileName(this , "Open a file");

    QFile File(StrFile);

    if(!File.open(QFile :: ReadOnly | QFile :: Text))
    {
        QMessageBox :: warning(this , "Error" , "File is not open");
    }
    else
    {
        QTextStream in(&File);
        QString TextLine = in.readLine() , StrTemp;
        QStringList  Lexsema = TextLine.split(",");

        FileName = StrFile;
        int count = 1;

        if(pHead != nullptr)
        {
            pHead->FreeList();
            pHead = nullptr;
        }

        for (int i = 0 ; i < ui->TableBook->rowCount() ; i++ )
        {
            for (int j = 0 ; j < ui->TableBook->columnCount() ; j++ )
            {
                if(ui->TableBook->item(i , j) != nullptr)
                    delete ui->TableBook->item(i , j);
            }
        }

        while (!TextLine.isEmpty())
        {
            ui->TableBook->setRowCount(count);

            fill_list(StrTemp , Lexsema , count);

            TextLine = in.readLine();
            Lexsema = TextLine.split(",");
            count++;
        }
        ui->InfoLabel->setText("File open");
    }

}

void MainWindow::on_SortButton_clicked()
{
    if(!pHead)
        return;

    SortWindow * sortwindow = new SortWindow(this);
    sortwindow->exec();
    delete sortwindow;

    List* pTemp = pHead;
    int count = 1;

    while (pTemp)
    {
        ui->TableBook->setRowCount(count);

        QTableWidgetItem * item1 = new QTableWidgetItem(pTemp->GetSurname()) , *item2 = new QTableWidgetItem(pTemp->GetName()) , *item3 = new QTableWidgetItem(pTemp->GetBookName());
        QTableWidgetItem * item4 = new QTableWidgetItem(QString :: number(pTemp->GetYear())) , *item5 = new QTableWidgetItem(QString :: number(pTemp->GetPages()));
        QTableWidgetItem *item6 = new QTableWidgetItem(QString :: number(pTemp->GetPrice()));

        ui->TableBook->setItem(count - 1 , 0 , item1);
        ui->TableBook->setItem(count - 1 , 1 , item2);
        ui->TableBook->setItem(count - 1 , 2 , item3);
        ui->TableBook->setItem(count - 1 , 3 , item4);
        ui->TableBook->setItem(count - 1 , 4 , item5);
        ui->TableBook->setItem(count - 1 , 5 , item6);

        count++;
        pTemp = pTemp->GetNext();
    }

    CheckSave = 1;

}

void MainWindow::on_SaveButton_clicked()
{
    QString sFile = QFileDialog :: getOpenFileName(this , "Open a file");

    FileName = sFile;

    QFile file(FileName);

    if(!file.open(QFile :: WriteOnly | QFile :: Text))
    {
        QMessageBox :: warning(this , "Error" , "File is not save");
    }
    else
    {
        QTextStream out(&file);

        for (int i = 0; i < ui->TableBook->rowCount() ;i++ )
        {
            for (int j = 0; j < ui->TableBook->columnCount() ;j++ )
            {
                QString str = ui->TableBook->item(i , j)->text();
                out << str;
                out << ",";
            }
            out << "\n";
        }

        file.close();
        ui->InfoLabel->setText("File save");

        CheckSave = 0;
    }

}

void MainWindow::on_CloseButton_clicked()
{
    if(CheckSave)
    {
        QMessageBox :: StandardButton mesg = QMessageBox :: question(this , "Question about open" , "Do you want close not save file?" , QMessageBox :: Yes | QMessageBox :: No );

        if(mesg == QMessageBox :: No)
        {
            return;
        }
    }

    close();

    QString str1 = "d" , str2 = "s";

    if(str1 > str2)
    {


    }
}

void MainWindow :: closeEvent(QCloseEvent* event)
{
    if(CheckSave == 1)
    {
        QMessageBox :: StandardButton mesg = QMessageBox :: question(this , "Question about open" , "Do you want close not save file?" , QMessageBox :: Yes | QMessageBox :: No );

        if(mesg == QMessageBox :: No)
        {
            event->ignore();
        }
        else
        {
            close();
        }
    }
    else
    {
        close();
    }

}
