/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QLabel *label;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(379, 502);
        Info->setStyleSheet(QString::fromUtf8("background : rgb(255, 71, 9)"));
        label = new QLabel(Info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 231, 41));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../lab04_small.jpg")));
        plainTextEdit = new QPlainTextEdit(Info);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 70, 361, 421));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background : rgb(145, 115, 14);\n"
"\n"
""));

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QDialog *Info)
    {
        Info->setWindowTitle(QCoreApplication::translate("Info", "Dialog", nullptr));
        label->setText(QString());
        plainTextEdit->setPlainText(QCoreApplication::translate("Info", "Hello\n"
"\n"
"It is library special for lab04 from VIPZ and her main fuction it is  to review the lists of books and add new and delete books whose authors' names begin with A B S D. You can also sort the list of books by the number of pages for the convenience of users.\n"
"\n"
"There are some rules for entering information about the book you want to add.\n"
"\n"
"1)Numbers cannot be used for names and letters cannot be used for other fields.\n"
"\n"
"2)The maximum length of a proper name is 25 characters.\n"
"\n"
"3)Fields cannot be empty or negative when entering numbers.\n"
"\n"
"If you have additional questions, you can contact us via e-mail: superpiska228@gmail.com\n"
"\n"
"Enjoy using the program.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
