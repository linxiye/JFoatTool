#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void LogOut();
    int Fota_Creat_Patch(QString patchName);
    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;

    QProcess *process;
};

#define FOTA_FILE_SOURCE            0
#define FOTA_FILE_TARGET            1
#define FOTA_FILE_PATCH             2
#define FOTA_FILE_PATCH_NAME        "diff.patch"
#define FOTA_FILE_PATCH_BIN_NAME    "diff.bin"

struct fota_file_info
{
    quint32 file_size;
    quint32 file_crc;
};

int jdiff_main(int aiArgCnt, char *acArg[]);
#endif // MAINWINDOW_H
