/********************************************************************************
** Form generated from reading UI file 'fordelete.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORDELETE_H
#define UI_FORDELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ForDelete
{
public:
    QLabel *label;
    QPushButton *DeleteCondition;
    QPushButton *DeleteIndex;
    QPushButton *DeleteAll;
    QLineEdit *IndexEdit;
    QLabel *label_2;
    QPushButton *OpenButton_4;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *ForDelete)
    {
        if (ForDelete->objectName().isEmpty())
            ForDelete->setObjectName(QString::fromUtf8("ForDelete"));
        ForDelete->resize(390, 228);
        ForDelete->setStyleSheet(QString::fromUtf8("background : rgb(255, 71, 9)"));
        label = new QLabel(ForDelete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 231, 41));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../lab04_small.jpg")));
        DeleteCondition = new QPushButton(ForDelete);
        DeleteCondition->setObjectName(QString::fromUtf8("DeleteCondition"));
        DeleteCondition->setGeometry(QRect(270, 70, 111, 41));
        DeleteCondition->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        DeleteIndex = new QPushButton(ForDelete);
        DeleteIndex->setObjectName(QString::fromUtf8("DeleteIndex"));
        DeleteIndex->setGeometry(QRect(10, 70, 111, 41));
        DeleteIndex->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        DeleteAll = new QPushButton(ForDelete);
        DeleteAll->setObjectName(QString::fromUtf8("DeleteAll"));
        DeleteAll->setGeometry(QRect(140, 70, 111, 41));
        DeleteAll->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        IndexEdit = new QLineEdit(ForDelete);
        IndexEdit->setObjectName(QString::fromUtf8("IndexEdit"));
        IndexEdit->setGeometry(QRect(10, 120, 111, 21));
        IndexEdit->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        IndexEdit->setReadOnly(false);
        label_2 = new QLabel(ForDelete);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 120, 71, 21));
        label_2->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255)"));
        OpenButton_4 = new QPushButton(ForDelete);
        OpenButton_4->setObjectName(QString::fromUtf8("OpenButton_4"));
        OpenButton_4->setGeometry(QRect(320, 180, 61, 31));
        OpenButton_4->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        label_3 = new QLabel(ForDelete);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 160, 61, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/User/Downloads/imgonline-com-ua-Resize-7vPfUbXbO1ug.png")));
        label_4 = new QLabel(ForDelete);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 180, 221, 31));
        QFont font;
        font.setPointSize(9);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color : rgb(170, 0, 0)"));

        retranslateUi(ForDelete);

        QMetaObject::connectSlotsByName(ForDelete);
    } // setupUi

    void retranslateUi(QDialog *ForDelete)
    {
        ForDelete->setWindowTitle(QCoreApplication::translate("ForDelete", "Dialog", nullptr));
        label->setText(QString());
        DeleteCondition->setText(QCoreApplication::translate("ForDelete", "Delete by condition", nullptr));
        DeleteIndex->setText(QCoreApplication::translate("ForDelete", "Delete by index ", nullptr));
        DeleteAll->setText(QCoreApplication::translate("ForDelete", "Delete all", nullptr));
        label_2->setText(QCoreApplication::translate("ForDelete", "Enter index", nullptr));
        OpenButton_4->setText(QCoreApplication::translate("ForDelete", "Exit", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ForDelete: public Ui_ForDelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORDELETE_H
