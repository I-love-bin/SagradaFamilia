#ifndef PARSERWINDOW_H
#define PARSERWINDOW_H

#include <QMainWindow>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class ParserWindow; }
QT_END_NAMESPACE

class ParserWindow : public QMainWindow
{
    Q_OBJECT

public:
    ParserWindow(QWidget *parent = nullptr);
    ~ParserWindow();

private slots:
    void on_pushButton_released();

private:
    Ui::ParserWindow *ui;
};

#endif // PARSERWINDOW_H
