#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QColor>
#include <QFileDialog>
#include <QMessageBox>
#include <QtCore>
#include <QTableWidgetItem>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void fill_list(QString StrTemp , QStringList Lexsema , int count);

    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

    void on_InfoButton_clicked();

    void on_OpenButton_clicked();

    void on_SortButton_clicked();

    void on_SaveButton_clicked();

    void on_CloseButton_clicked();

    void closeEvent(QCloseEvent* event);

public:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
