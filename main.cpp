#include <QtGui/QApplication>
#include "mainwindow.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // şeffaflık saflıktır
    w.setStyleSheet("background:transparent;");
    w.setAttribute(Qt::WA_TranslucentBackground);
    // çerçevesizlik, 70'lik ama 60'lık hem de
    w.setWindowFlags(Qt::FramelessWindowHint);

    w.show();

    return a.exec();
}
