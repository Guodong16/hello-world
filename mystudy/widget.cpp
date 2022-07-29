#include "widget.h"
#include "ui_widget.h"
#include "mydialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->showDialogButton, &QPushButton::clicked, this, &Widget::showMyDialog);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showMyDialog()
{
    MyDialog dlg;
    dlg.show();
}

