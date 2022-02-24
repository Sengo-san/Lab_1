#include <QCoreApplication>

#include <iostream>
#include <string>

using namespace std;

#include "EStackEmpty.h"
#include "Stack.h"

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    string str1 = "Ivan";
    string str2 = "Igor";
    Stack <string> names;
    names.Push(str1);
    names.Push(str2);
    cout<<names.Size()<<endl;
    cout << names.Pop() << endl;
    cout << names.Pop() << endl;
    cout << names.Pop() << endl;

    return 0; //a.exec();
}
