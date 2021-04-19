#ifndef SORTWINDOW_H
#define SORTWINDOW_H

#include <QDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "list.h"

namespace Ui {
class SortWindow;
}

class SortWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SortWindow(MainWindow *parent);
    ~SortWindow();

private slots:
    void on_ExitButton_clicked();

    bool sort_choose(int arg , List* pTemp , List* pTempNext);

    void sort_all(int arg);

    void on_SortSurnameButton_clicked();

    void on_SortNameButton_clicked();

    void on_SortBookameButton_clicked();

    void on_SortYearButton_clicked();

    void on_SortPagesButton_clicked();

    void on_SortPriceButton_clicked();

private:
    Ui::SortWindow *ui;
    MainWindow * mw;
};

#endif // SORTWINDOW_H
