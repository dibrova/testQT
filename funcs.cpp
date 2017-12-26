#include <QFile>
#include <QString>
#include <QTextStream>
#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

void readFromFile(string &str){
    QFile inputFile("exemple.txt");
    if (inputFile.open(QIODevice::ReadOnly)){
       QTextStream in(&inputFile);
       while (!in.atEnd()){
          str = in.readLine().toStdString();
       }
       inputFile.close();
    }
}

void writeToFile(string &str){
    QFile outputFile("exemple_out.txt");
    if (outputFile.open(QIODevice::WriteOnly)) {
        QTextStream out(&outputFile);
        out << QString::fromStdString(str);
        outputFile.flush();
        outputFile.close();
    }
}

string reverseStrToFile(string &str) {
    stack<string> st;
    istringstream iss(str);
    string buf;
    while (iss) {
        string word;
        iss >> word;
        st.push(word);
    }
    while (!st.empty()) {
        buf += st.top() + " ";
        st.pop();
    }
    buf.erase(buf.end() - 1, buf.end());
    buf.erase(buf.begin(), buf.begin() + 1);
    writeToFile(buf);
    return buf;
}

string countRepeatCharToFile(string &str) {
        list<string> buff;
        uint max = 0;
        for (uint i = 0; i < str.length(); i++) {
        string tmp;
        if (str[i] == ' ' || str[i + 1] == ' ') continue;
        tmp += str[i];
        tmp += str[i + 1];
        auto n1 = str.find(tmp);
        auto n2 = str.rfind(tmp);
        if (n1 == n2) continue;
        uint cnt = 1;
        while (n1 != n2) {
            n1 = str.find(tmp, n1 + 1);
            cnt++;
        }
        if (cnt < max)continue;
        auto check = count(buff.begin(), buff.end(), tmp);
        if (cnt == max && check == 0)  buff.push_back(tmp);
        if (cnt > max) {
        buff.clear();
        buff.push_back(tmp);
        max = cnt;
        }
    }
    string tmp;
        tmp += to_string(max) + ": ";
        foreach(string s, buff) {
        tmp += s + " ";
    }
    tmp.pop_back();
    writeToFile(tmp);
    return tmp;
}

string replacePoint(string &str){
    for_each(str.begin(), str.end(), [](char &n) { if (n == ',') n = '.'; });
    writeToFile(str);
    return str;
}

string removeSpaces(string &str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    writeToFile(str);
    return str;
}

string foundChar(string &str){
    char key;
    uint cnt;
    string res;
    cout << "Please input char for count: ";
    key = getchar();
    cnt = count(str.begin(), str.end(), key);
    res += "Found " + string(1, key) + " x " + to_string(cnt);
    writeToFile(res);
    return res;
}

string foundDigitToFile(string &str) {
    string buf;
    foreach(char ch, str) {
        if (isdigit(ch)) {
            buf += ch;
            buf += " ";
        }
    }
    if (buf.size()) buf.pop_back();
    writeToFile(buf);
    return buf;
}
