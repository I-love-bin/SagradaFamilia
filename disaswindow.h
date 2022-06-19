#ifndef DISASWINDOW_H
#define DISASWINDOW_H

#include <QMainWindow>
#include <QRadioButton>

namespace Ui
{
    class DisasWindow;
}

class DisasWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisasWindow(QWidget *parent = nullptr);

private:
    QRadioButton *radioButton11;
    QRadioButton *radioButton21;
    QRadioButton *radioButton31;
};

#endif // DISASWINDOW_H
