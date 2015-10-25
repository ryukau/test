#include <QCoreApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool b;
    int i;

    b = 100; // true
    i = b; // i = 1
    qDebug() << b << ", " << i;

    b = -100; // true
    i = b; // i = 1
    qDebug() << b << ", " << i;

    b = 0; // false
    i = b; // i = 0
    qDebug() << b << ", " << i;

    ++b; // 後置または前置++演算子が使える
    qDebug() << b;

    //--b; // --演算子は使えない
    // b = 0 / 0; // arithmetic exception

    // yey

    // yey yey yey

    return a.exec();
}

