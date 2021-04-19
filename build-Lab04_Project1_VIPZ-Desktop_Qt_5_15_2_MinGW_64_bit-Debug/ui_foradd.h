/********************************************************************************
** Form generated from reading UI file 'foradd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORADD_H
#define UI_FORADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForAdd
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *CancelButton;
    QPushButton *AddButton;
    QPushButton *RulesButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *SurnameEdit;
    QLineEdit *NameEdit;
    QLineEdit *BookNameEdit;
    QLineEdit *YearEdit;
    QLineEdit *PagesEdit;
    QLineEdit *PriceEdit;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *ForAdd)
    {
        if (ForAdd->objectName().isEmpty())
            ForAdd->setObjectName(QString::fromUtf8("ForAdd"));
        ForAdd->resize(790, 267);
        ForAdd->setStyleSheet(QString::fromUtf8("background : rgb(255, 71, 9)"));
        label = new QLabel(ForAdd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 10, 231, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../lab04_small.jpg")));
        label_2 = new QLabel(ForAdd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 771, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(9);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255)"));
        CancelButton = new QPushButton(ForAdd);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setGeometry(QRect(650, 220, 61, 31));
        CancelButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        AddButton = new QPushButton(ForAdd);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(720, 220, 61, 31));
        AddButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        RulesButton = new QPushButton(ForAdd);
        RulesButton->setObjectName(QString::fromUtf8("RulesButton"));
        RulesButton->setGeometry(QRect(580, 220, 61, 31));
        RulesButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(255, 71, 9);\n"
"border-radius : 15;\n"
"\n"
""));
        layoutWidget = new QWidget(ForAdd);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 130, 771, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SurnameEdit = new QLineEdit(layoutWidget);
        SurnameEdit->setObjectName(QString::fromUtf8("SurnameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SurnameEdit->sizePolicy().hasHeightForWidth());
        SurnameEdit->setSizePolicy(sizePolicy);
        SurnameEdit->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));

        horizontalLayout->addWidget(SurnameEdit);

        NameEdit = new QLineEdit(layoutWidget);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        sizePolicy.setHeightForWidth(NameEdit->sizePolicy().hasHeightForWidth());
        NameEdit->setSizePolicy(sizePolicy);
        NameEdit->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));

        horizontalLayout->addWidget(NameEdit);

        BookNameEdit = new QLineEdit(layoutWidget);
        BookNameEdit->setObjectName(QString::fromUtf8("BookNameEdit"));
        sizePolicy.setHeightForWidth(BookNameEdit->sizePolicy().hasHeightForWidth());
        BookNameEdit->setSizePolicy(sizePolicy);
        BookNameEdit->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));

        horizontalLayout->addWidget(BookNameEdit);

        YearEdit = new QLineEdit(layoutWidget);
        YearEdit->setObjectName(QString::fromUtf8("YearEdit"));
        sizePolicy.setHeightForWidth(YearEdit->sizePolicy().hasHeightForWidth());
        YearEdit->setSizePolicy(sizePolicy);
        YearEdit->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));

        horizontalLayout->addWidget(YearEdit);

        PagesEdit = new QLineEdit(layoutWidget);
        PagesEdit->setObjectName(QString::fromUtf8("PagesEdit"));
        sizePolicy.setHeightForWidth(PagesEdit->sizePolicy().hasHeightForWidth());
        PagesEdit->setSizePolicy(sizePolicy);
        PagesEdit->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));

        horizontalLayout->addWidget(PagesEdit);

        PriceEdit = new QLineEdit(layoutWidget);
        PriceEdit->setObjectName(QString::fromUtf8("PriceEdit"));
        sizePolicy.setHeightForWidth(PriceEdit->sizePolicy().hasHeightForWidth());
        PriceEdit->setSizePolicy(sizePolicy);
        PriceEdit->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));

        horizontalLayout->addWidget(PriceEdit);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 3);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        label_3 = new QLabel(ForAdd);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 200, 61, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/User/Downloads/imgonline-com-ua-Resize-7vPfUbXbO1ug.png")));
        label_4 = new QLabel(ForAdd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 210, 431, 41));
        QFont font1;
        font1.setPointSize(9);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color : rgb(170, 0, 0);"));

        retranslateUi(ForAdd);

        QMetaObject::connectSlotsByName(ForAdd);
    } // setupUi

    void retranslateUi(QDialog *ForAdd)
    {
        ForAdd->setWindowTitle(QCoreApplication::translate("ForAdd", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("ForAdd", "             Surname                           Name                           BookName               Year       Pages       Price", nullptr));
        CancelButton->setText(QCoreApplication::translate("ForAdd", "Cancel", nullptr));
        AddButton->setText(QCoreApplication::translate("ForAdd", "Add", nullptr));
        RulesButton->setText(QCoreApplication::translate("ForAdd", "Rules", nullptr));
        NameEdit->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ForAdd: public Ui_ForAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORADD_H
