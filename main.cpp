/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */

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
