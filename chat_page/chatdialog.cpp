#include "chatdialog.h"
#include "ui_chatdialog.h"

chatdialog::chatdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatdialog)
{
    ui->setupUi(this);
}

chatdialog::~chatdialog()
{
    delete ui;
}
