/********************************************************************************
** Form generated from reading UI file 'sortwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWINDOW_H
#define UI_SORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SortWindow
{
public:
    QLabel *label;
    QPushButton *SortSurnameButton;
    QPushButton *SortBookameButton;
    QPushButton *SortNameButton;
    QPushButton *SortYearButton;
    QPushButton *SortPagesButton;
    QPushButton *SortPriceButton;
    QPushButton *ExitButton;

    void setupUi(QDialog *SortWindow)
    {
        if (SortWindow->objectName().isEmpty())
            SortWindow->setObjectName(QString::fromUtf8("SortWindow"));
        SortWindow->resize(669, 208);
        SortWindow->setStyleSheet(QString::fromUtf8("background : rgb(255, 71, 9)"));
        label = new QLabel(SortWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 231, 51));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../lab04_small.jpg")));
        SortSurnameButton = new QPushButton(SortWindow);
        SortSurnameButton->setObjectName(QString::fromUtf8("SortSurnameButton"));
        SortSurnameButton->setGeometry(QRect(20, 90, 80, 41));
        SortSurnameButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        SortBookameButton = new QPushButton(SortWindow);
        SortBookameButton->setObjectName(QString::fromUtf8("SortBookameButton"));
        SortBookameButton->setGeometry(QRect(240, 90, 80, 41));
        SortBookameButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        SortNameButton = new QPushButton(SortWindow);
        SortNameButton->setObjectName(QString::fromUtf8("SortNameButton"));
        SortNameButton->setGeometry(QRect(130, 90, 80, 41));
        SortNameButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        SortYearButton = new QPushButton(SortWindow);
        SortYearButton->setObjectName(QString::fromUtf8("SortYearButton"));
        SortYearButton->setGeometry(QRect(350, 90, 80, 41));
        SortYearButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        SortPagesButton = new QPushButton(SortWindow);
        SortPagesButton->setObjectName(QString::fromUtf8("SortPagesButton"));
        SortPagesButton->setGeometry(QRect(460, 90, 80, 41));
        SortPagesButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        SortPriceButton = new QPushButton(SortWindow);
        SortPriceButton->setObjectName(QString::fromUtf8("SortPriceButton"));
        SortPriceButton->setGeometry(QRect(570, 90, 80, 41));
        SortPriceButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        ExitButton = new QPushButton(SortWindow);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(580, 170, 71, 31));
        ExitButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));

        retranslateUi(SortWindow);

        QMetaObject::connectSlotsByName(SortWindow);
    } // setupUi

    void retranslateUi(QDialog *SortWindow)
    {
        SortWindow->setWindowTitle(QCoreApplication::translate("SortWindow", "Dialog", nullptr));
        label->setText(QString());
        SortSurnameButton->setText(QCoreApplication::translate("SortWindow", "By Surname", nullptr));
        SortBookameButton->setText(QCoreApplication::translate("SortWindow", "By Bookname", nullptr));
        SortNameButton->setText(QCoreApplication::translate("SortWindow", "By Name", nullptr));
        SortYearButton->setText(QCoreApplication::translate("SortWindow", "By Year", nullptr));
        SortPagesButton->setText(QCoreApplication::translate("SortWindow", "By Pages", nullptr));
        SortPriceButton->setText(QCoreApplication::translate("SortWindow", "By Price", nullptr));
        ExitButton->setText(QCoreApplication::translate("SortWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortWindow: public Ui_SortWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWINDOW_H
