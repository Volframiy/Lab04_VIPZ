/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *NameLabel;
    QTableWidget *TableBook;
    QLabel *BackgroundLabel;
    QPushButton *OpenButton;
    QPushButton *DeleteButton;
    QPushButton *AddButton;
    QPushButton *SortButton;
    QPushButton *SaveButton;
    QPushButton *InfoButton;
    QLabel *InfoLabel;
    QPushButton *CloseButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(879, 542);
        MainWindow->setStyleSheet(QString::fromUtf8("background : rgb(255, 71, 9)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        NameLabel = new QLabel(centralwidget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
        NameLabel->setGeometry(QRect(220, 10, 541, 91));
        NameLabel->setPixmap(QPixmap(QString::fromUtf8("../../../../lab04.jpeg")));
        TableBook = new QTableWidget(centralwidget);
        TableBook->setObjectName(QString::fromUtf8("TableBook"));
        TableBook->setGeometry(QRect(120, 130, 751, 391));
        TableBook->setStyleSheet(QString::fromUtf8("background : rgb(145, 125, 14);\n"
"color : rgb(255, 255, 255)"));
        BackgroundLabel = new QLabel(centralwidget);
        BackgroundLabel->setObjectName(QString::fromUtf8("BackgroundLabel"));
        BackgroundLabel->setGeometry(QRect(10, 0, 101, 551));
        BackgroundLabel->setStyleSheet(QString::fromUtf8("background : rgb(217, 0, 0)"));
        OpenButton = new QPushButton(centralwidget);
        OpenButton->setObjectName(QString::fromUtf8("OpenButton"));
        OpenButton->setGeometry(QRect(20, 100, 80, 41));
        OpenButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        DeleteButton->setGeometry(QRect(20, 220, 80, 41));
        DeleteButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(20, 160, 80, 41));
        AddButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        SortButton = new QPushButton(centralwidget);
        SortButton->setObjectName(QString::fromUtf8("SortButton"));
        SortButton->setGeometry(QRect(20, 280, 80, 41));
        SortButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        SaveButton = new QPushButton(centralwidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setGeometry(QRect(20, 340, 80, 41));
        SaveButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        InfoButton = new QPushButton(centralwidget);
        InfoButton->setObjectName(QString::fromUtf8("InfoButton"));
        InfoButton->setGeometry(QRect(20, 400, 80, 41));
        InfoButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        InfoLabel = new QLabel(centralwidget);
        InfoLabel->setObjectName(QString::fromUtf8("InfoLabel"));
        InfoLabel->setGeometry(QRect(20, 20, 81, 21));
        QFont font;
        font.setPointSize(9);
        InfoLabel->setFont(font);
        InfoLabel->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"background : rgb(217, 0, 0);"));
        InfoLabel->setAlignment(Qt::AlignCenter);
        CloseButton = new QPushButton(centralwidget);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(20, 460, 80, 41));
        CloseButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 879, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        NameLabel->setText(QString());
        BackgroundLabel->setText(QString());
        OpenButton->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete book", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "Add book", nullptr));
        SortButton->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        SaveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        InfoButton->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        InfoLabel->setText(QString());
        CloseButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
