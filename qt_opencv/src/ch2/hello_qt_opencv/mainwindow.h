#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_inputPushButton_clicked();

    void on_outputPushButton_clicked();

    void loadSettings();
    void saveSettings();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
