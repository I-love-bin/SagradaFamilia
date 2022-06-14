#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) 
{
	QApplication app(argc, argv);
	MainWindow mainwindow;

	mainwindow.setWindowTitle("SagradaFamilia");
	mainwindow.resize(400,400);
	mainwindow.show();

	return(app.exec());
}
