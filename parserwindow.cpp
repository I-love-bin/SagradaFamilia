#include "parserwindow.h"
#include "./ui_parserwindow.h"

ParserWindow::ParserWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ParserWindow)
{
    ui->setupUi(this);
}

ParserWindow::~ParserWindow()
{
    delete ui;
}

void ParserWindow::on_pushButton_released()
{
    ParserWindow w;
    w.setFixedSize(500,300);
    w.show();
}
