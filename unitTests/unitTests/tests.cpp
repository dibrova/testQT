#include <iostream>
#include <string>
#define LOG cout << __FUNCTION__ << ":\t";

using namespace std;

void test001(){
    LOG
    string str = "Qt Creator provides a cross-platform !";
    (reverseStrToFile(str)=="! cross-platform a provides Creator Qt")? cout << "PASSED\n": cout << "FAILED\n";
}

void test002(){
    LOG
    string str = "QtCreator!";
    (reverseStrToFile(str)=="QtCreator!")? cout << "PASSED\n": cout << "FAILED\n";
}

void test011(){
    LOG
    string str = "Qt Creator provides a cross-platform !";
    (countRepeatCharToFile(str)=="2: at or ro") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test012(){
    LOG
    string str = "qwertyuiopasdfghjkl;zxcvbnm,.";
    (countRepeatCharToFile(str)=="0:") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test013(){
    LOG
    string str = "Qt Creator!";
    (countRepeatCharToFile(str)=="0:") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test021(){
    LOG
    string str = "Qt, Creator, provides ,a cross-platform!";
    (replacePoint(str)=="Qt. Creator. provides .a cross-platform!") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test022(){
    LOG
    string str = "Qt Creator provides a cross-platform!";
    (replacePoint(str)=="Qt Creator provides a cross-platform!") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test023(){
    LOG
    string str = "Creator!";
    (replacePoint(str)=="Creator!") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test031(){
    LOG
    string str = "Qt Creator provides a cross-platform!";
    (removeSpaces(str)=="QtCreatorprovidesacross-platform!") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test032(){
    LOG
    string str = "QtCreator";
    (removeSpaces(str)=="QtCreator") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test041(){
    LOG
    string str = "Qt Creator provides a cross-platform!";
    (foundDigitToFile(str)=="") ? cout << "PASSED\n": cout << "FAILED\n";
}
void test042(){
    LOG
    string str = "Qt 3 Creator1 provides2 a cross-platform!";
    (foundDigitToFile(str)=="3 1 2") ? cout << "PASSED\n": cout << "FAILED\n";
}
