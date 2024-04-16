#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QPushButton b1("Button1", &w);
    QPushButton b2("Button2", &w);
    QPushButton b3("Button3", &w);
    QPushButton b4("Button4", &w);
    QPushButton b5("Button5", &w);
    QPushButton b6("Button6", &w);
    QPushButton b7("Button7", &w);
    QPushButton b8("Button8", &w);
    QPushButton b9("Button9", &w);
    QPushButton b10("Button10", &w);
    QPushButton b11("Button11", &w);
    QPushButton b12("Button12", &w);
    QPushButton b13("Button13", &w);
    QPushButton b14("Button14", &w);

    b1.setGeometry(20,20,90,40);
    b2.setGeometry(120,20,90,40);
    b3.setGeometry(220,20,90,40);
    b4.setGeometry(320,20,90,40);
    b5.setGeometry(420,20,90,40);
    b6.setGeometry(520,20,90,40);
    b7.setGeometry(620,20,90,40);
    b8.setGeometry(20,70,90,40);
    b9.setGeometry(20,120,90,40);
    b10.setGeometry(20,170,90,40);
    b11.setGeometry(20,220,90,40);
    b12.setGeometry(20,270,90,40);
    b13.setGeometry(20,320,90,40);
    b14.setGeometry(20,370,90,40);

    b1.setStyleSheet("background-color: #FF0000;");

    w.show();
    return a.exec();
}
