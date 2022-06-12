#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
	if( ui->radioButton->isChecked() )
	{
		ui->stackedWidget->setCurrentIndex(1);
	}
	else if( ui->radioButton_2->isChecked() )
	{
		ui->stackedWidget->setCurrentIndex(2);
	}

}
