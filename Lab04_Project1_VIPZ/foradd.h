#ifndef FORADD_H
#define FORADD_H

#include "mainwindow.h"
#include "info.h"
#include "ui_mainwindow.h"
#include "list.h"

#include <QDialog>
#include <QString>

namespace Ui {
class ForAdd;
}

class ForAdd : public QDialog
{
    Q_OBJECT

public:
    explicit ForAdd(MainWindow *parent);
    ~ForAdd();

private slots:
    void on_CancelButton_clicked();

    void on_RulesButton_clicked();

    void on_AddButton_clicked();

private:
    Ui::ForAdd *ui;
    MainWindow * mw;
};

#endif // FORADD_H
