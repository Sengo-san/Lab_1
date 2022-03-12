#include <QCoreApplication>

#include <iostream>
#include <string>

using namespace std;

#include "EStackEmpty.h"
#include "Stack.h"

#include "PersonKeeper.h"

void readfile (ifstream& tmp)
{
    char ch;
    while (tmp.get(ch)) {
    cout<<"0"<<ch;
    }
}


int main(int argc, char *argv[])
{/*
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
*/

    ifstream potok ("C:\\Users/tikho/Documents/Lab_1/File.txt");
    if (!potok) cout<<"errr";

    readfile (potok);

    return 0; //a.exec();
}
