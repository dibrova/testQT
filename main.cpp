#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <funcs.h>
#include <iostream>
#define p system("pause");
#define c system("cls");

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string str;
    readFromFile(str);
    writeToFile(str);
    cout << str << endl;
    p c
    cout << reverseStrToFile(str) << endl;
    p c
    cout << countRepeatCharToFile(str) << endl;
    p c
    cout << replacePoint(str)<< endl;
    p c
    cout << foundChar(str) << endl;
    p c
    cout << removeSpaces(str) << endl;
    p c
    cout << foundDigitToFile(str) << endl;

    return a.exec();
}

