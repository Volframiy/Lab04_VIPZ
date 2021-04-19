#include "list.h"

List::List()
{
    this->pNext = nullptr;
}


int List::AddList(List *pNew)
{
    List* pRun = this;
    int i = 1;

    while (1)
    {
        if (pNew->book.pages <= (this)->book.pages)
        {
            return 0;
        }

        if (pNew->book.pages >= pRun->book.pages && pRun->pNext == nullptr)
        {
            return -1;
        }

        if (pNew->book.pages < pRun->pNext->book.pages && pNew->book.pages > pRun->book.pages)
        {
            return i;
        }

        pRun = pRun->pNext;
        i++;
    }
}

void List::FreeList()
{
    List* pTemp = this , *pTempNext;

        while (pTemp)
        {
            pTempNext = pTemp->pNext;
            delete pTemp;
            pTemp = pTempNext;
        }
}

void List::SetNext(List *list)
{
    this->pNext = list;
}

void List::SetSurname(QString str)
{
    this->book.surname = str;
}

void List::SetName(QString str)
{
    this->book.name = str;
}

void List::SetBookName(QString str)
{
    this->book.bookname = str;
}

void List::SetYear(int n)
{
    this->book.year = n;
}

void List::SetPages(int n)
{
    this->book.pages = n;
}

void List::SetPrice(int n)
{
    this->book.price = n;
}

List *List::GetNext()
{
    return this->pNext;
}

QString List::GetSurname()
{
    return this->book.surname;
}

QString List::GetName()
{
    return this->book.name;
}

QString List::GetBookName()
{
    return this->book.bookname;
}

int List::GetYear()
{
    return this->book.year;
}

int List::GetPages()
{
    return this->book.pages;
}

int List::GetPrice()
{
    return this->book.price;
}

List::Book::Book()
{
    this->bookname = "";
    this->name = "g";
    this->surname = "";
    this->pages = 0;
    this->year = 0;
    this->price = 0;
}





