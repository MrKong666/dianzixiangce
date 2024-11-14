#include "mainwindow.h"

#include <QApplication>
#include<QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile qss(":/style/style.qss");
    if(qss.open(QFile::ReadOnly)){
        qDebug()<<"打开成功";
        QString style=QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }
    else{
        qDebug()<<"失败";
        return 0;
    }

    w.setWindowTitle("Album");
   // w.showMaximized();
    w.show();
    return a.exec();
}
