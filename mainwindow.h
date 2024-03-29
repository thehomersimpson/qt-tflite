#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "imagewidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    ImageWidget* imagewidget ;
    QImage image, mask ;

private slots:
    void openImage();
    void on_actionNone_triggered();
    void on_actionDeeplabV3_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
