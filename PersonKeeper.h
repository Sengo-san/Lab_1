#ifndef PERSONKEEPER_H
#define PERSONKEEPER_H

#include "Person.h"
#include "Stack.h"
#include <fstream>


class PersonKeeper
{
public:
    static PersonKeeper& Instance();
    void /*Stack <Person>*/ readPersons (std::ifstream); //читает из потока (файла)
    void writePersons (); //записывает в поток из стека

private:
    PersonKeeper();
    ~PersonKeeper();
    PersonKeeper(PersonKeeper const&);
    PersonKeeper& operator= (PersonKeeper const&);

    Stack<Person> name_stack; //стэк объектов класса Person
};







#endif // PERSONKEEPER_H
