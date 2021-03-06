#ifndef WINDOW_H
#define WINDOW_H

#include "settingsmanager.h"
#include "mainwindow.h"
#include "handlefiles.h"
#include <QMainWindow>
#include <QFileSystemModel>
#include <QTableWidget>

static int currentIndex = 0; // Global

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT




public:
    explicit Window(QWidget *parent = 0);

    QAction *act1, *act2, *act3, *act4;

    ~Window();

public slots:



protected:
     void contextMenuEvent(QContextMenuEvent *event);


private slots:

    void on_pushHome_clicked();

    void on_pushCloudService_clicked();

    void on_pushManageCloud_clicked();

    void on_pushCPULimitation_clicked();

    void on_pushChangePassword_clicked();

    void on_pushButton_addDir_clicked();
    void on_pushButton_deleteDir_clicked();

    void on_pushButton_addWorkDir_clicked();

    void on_pushButton_addSaveDir_clicked();

    void on_pushManageSaveDir_clicked();

    void on_pushButton_deleteDir_2_clicked();

    void on_pushButton_confirm_clicked();


    void on_pushButton_setdefaultopenaction_clicked();

private:
    Ui::Window *ui;


    QFileSystemModel *fileBrowserModel;
    Settingsmanager *settingsmanager;
    Handlefiles *filesHandler;

    void initializeFileBrowser();
    void initializeTableWidget(QTableWidget *widget);
    void saveDirectories(QString group, QString name, QString path);
    void deleteDirectories(QString name);
    void populateTableWidget(QString group, QTableWidget *widget);
    QList<QString> returnSelectedPath();
    void copyDirectory();

};

#endif // WINDOW_H
