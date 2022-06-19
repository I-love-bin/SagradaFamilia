#ifndef PARSERWINDOW_H
#define PARSERWINDOW_H

#include <QMainWindow>
#include <QRadioButton>

namespace Ui
{
    class ParserWindow;
}

class ParserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ParserWindow(QWidget *parent = nullptr);

private:
    QRadioButton *radioButton11;
    QRadioButton *radioButton21;
    QRadioButton *radioButton31;
};

#endif
