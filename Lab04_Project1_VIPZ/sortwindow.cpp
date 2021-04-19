#include "sortwindow.h"
#include "ui_sortwindow.h"

extern List* pHead;

SortWindow::SortWindow(MainWindow *parent) :
    QDialog(),
    ui(new Ui::SortWindow)
{
    ui->setupUi(this);

    mw = parent;
}

SortWindow::~SortWindow()
{
    delete ui;
}

void SortWindow::on_ExitButton_clicked()
{
    close();
}

bool SortWindow::sort_choose(int arg , List* pTemp , List* pTempNext)
{
    if(arg == 1)
        return pTemp->GetSurname() > pTempNext->GetSurname();
    if(arg == 2)
        return pTemp->GetName() > pTempNext->GetName();
    if(arg == 3)
        return pTemp->GetBookName() > pTempNext->GetBookName();
    if(arg == 4)
        return pTemp->GetYear() > pTempNext->GetYear();
    if(arg == 5)
        return pTemp->GetPages() > pTempNext->GetPages();
    if(arg == 6)
        return pTemp->GetPrice() > pTempNext->GetPrice();


    return false;
}

void SortWindow::sort_all(int arg )
{
    if(!pHead)
        return;

    List* pTemp = pHead, * pTempNext = pTemp->GetNext(), * pForSwap = nullptr, * pTempPrev = nullptr;
    int k = 0;

    for (int i = 0; i < mw->ui->TableBook->rowCount() - 1; i++)
    {
        while (pTempNext)
        {
            if (sort_choose( arg , pTemp ,pTempNext))
            {
                pTemp->SetNext(pTempNext->GetNext());
                pTempNext->SetNext(pTemp);

                pForSwap = pTemp;
                pTemp = pTempNext;
                pTempNext = pForSwap;

                if (!k)
                    pHead = pTemp;
                if (k)
                    pTempPrev->SetNext(pTemp);

                pTempPrev = pTemp;
                pTemp = pTemp->GetNext();
                pTempNext = pTempNext->GetNext();
            }
            else
            {
                pTempPrev = pTemp;
                pTemp = pTemp->GetNext();
                pTempNext = pTempNext->GetNext();
            }
            k++;
        }
        k = 0;
        pTemp = pHead;
        pTempNext = pTemp->GetNext();
    }

    mw->ui->InfoLabel->setText("List sort");
}

void SortWindow::on_SortSurnameButton_clicked()
{
    sort_all(1);
    close();
}

void SortWindow::on_SortNameButton_clicked()
{
    sort_all(2);
    close();
}

void SortWindow::on_SortBookameButton_clicked()
{
    sort_all(3);
    close();
}

void SortWindow::on_SortYearButton_clicked()
{
    sort_all(4);
    close();
}

void SortWindow::on_SortPagesButton_clicked()
{
    sort_all(5);
    close();
}

void SortWindow::on_SortPriceButton_clicked()
{
    sort_all(6);
    close();
}
