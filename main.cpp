#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("C:\\Users\\Max Gll\\Downloads\\little_red_book.ico"));
    MainWindow w;
    w.show();
    return a.exec();
}
