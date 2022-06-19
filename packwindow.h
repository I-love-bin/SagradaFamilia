#ifndef PACKWINDOW_H
#define PACKWINDOW_H

#include <QMainWindow>
#include <QRadioButton>

namespace Ui
{
    class PackWindow;
}

class PackWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PackWindow(QWidget *parent = nullptr);

private:
    QRadioButton *radioButton11;
    QRadioButton *radioButton21;
    QRadioButton *radioButton31;
};

#endif // PACKWINDOW_H
