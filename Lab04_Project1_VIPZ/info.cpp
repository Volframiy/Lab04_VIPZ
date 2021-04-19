#include "info.h"
#include "ui_info.h"

Info::Info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);

    ui->plainTextEdit->setReadOnly(true);
}

Info::~Info()
{
    delete ui;
}
