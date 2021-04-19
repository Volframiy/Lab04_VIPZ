#ifndef FORDELETE_H
#define FORDELETE_H

#include <QDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "list.h"

#include <QString>
#include <QMessageBox>

namespace Ui {
class ForDelete;
}

class ForDelete : public QDialog
{
    Q_OBJECT

public:
    explicit ForDelete(MainWindow *parent);
    ~ForDelete();

private slots:
    void on_OpenButton_4_clicked();

    void on_DeleteAll_clicked();

    void on_DeleteIndex_clicked();

    void on_DeleteCondition_clicked();

private:
    Ui::ForDelete *ui;
    MainWindow * mw;
};

#endif // FORDELETE_H
