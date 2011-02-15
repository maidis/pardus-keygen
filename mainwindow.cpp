#include "mainwindow.hpp"
#include "ui_mainwindow.h"

QString alphabet1, alphabet2, alphabet3, alphabet4, alphabet5;
int diff = 'Z'-'A';
int miff = '9'-'0';

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // http://www.google.com.tr/search?hl=tr&q=qt+resource+phonon
    Phonon::MediaObject *music =
        Phonon::createPlayer(Phonon::MusicCategory,
                             Phonon::MediaSource("/home/maidis/hede.xm"));
    music->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_generate_clicked()
{
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        char c = 'A' + (rand() % diff);
        alphabet1 += QChar(c);
    }
    ui->ourkey1->setText(alphabet1);

    besdakikabeklegit();
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        char c = '1' + (rand() % miff);
        alphabet2 += QChar(c);
    }
    ui->ourkey2->setText(alphabet2);

    besdakikabeklegit();
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        char c = 'A' + (rand() % diff);
        alphabet3 += QChar(c);
    }
    ui->ourkey3->setText(alphabet3);

    besdakikabeklegit();
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        char c = '1' + (rand() % miff);
        alphabet4 += QChar(c);
    }
    ui->ourkey4->setText(alphabet4);

    besdakikabeklegit();
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        char c = 'A' + (rand() % diff);
        alphabet5 += QChar(c);
    }
    ui->ourkey5->setText(alphabet5);

    alphabet1 = alphabet2 = alphabet3 = alphabet4 = alphabet5 = "";
}

void MainWindow::on_reset_clicked()
{
    ui->ourkey1->setText("PARDUS");
    besdakikabeklegit();
    ui->ourkey2->setText("2011");
    besdakikabeklegit();
    ui->ourkey3->setText("PARDUS");
    besdakikabeklegit();
    ui->ourkey4->setText("2011");
    besdakikabeklegit();
    ui->ourkey5->setText("OLEY");
}

void MainWindow::besdakikabeklegit()
{
    QTime dieTime = QTime::currentTime().addSecs(1);
    while( QTime::currentTime() < dieTime )
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
