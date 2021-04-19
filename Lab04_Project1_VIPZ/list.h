#ifndef LIST_H
#define LIST_H

#include "mainwindow.h"
#include <QString>

class List
{
public:
    List();

    int AddList(List* pNew);
    void FreeList();

    void SetNext(List* list);
    void SetSurname(QString str);
    void SetName(QString str);
    void SetBookName(QString str);
    void SetYear(int n);
    void SetPages(int n);
    void SetPrice(int n);

    List* GetNext();
    QString GetSurname();
    QString GetName();
    QString GetBookName();
    int GetYear();
    int GetPages();
    int GetPrice();

private :

    class Book
    {
    public:
        Book();

        QString surname;
        QString name;
        QString bookname;
        int year;
        int pages;
        int price;
    };

    Book book;
    List* pNext;
};

#endif // LIST_H
