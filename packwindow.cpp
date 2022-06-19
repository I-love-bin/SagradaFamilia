#include "packwindow.h"

#include <QMainWindow>

PackWindow::PackWindow(QWidget *parent)
  : QMainWindow(parent)
{
    radioButton11 = new QRadioButton( "ELF Parser" , this );
    radioButton21 = new QRadioButton( "ELF Disassembler" , this );
    radioButton31 = new QRadioButton( "ELF Packer" , this );


    radioButton11->setGeometry(QRect(QPoint(20,50), QSize(200, 20)));
    radioButton21->setGeometry(QRect(QPoint(20,80),QSize(200,20)));
    radioButton31->setGeometry(QRect(QPoint(20,110),QSize(200,20)));
}
