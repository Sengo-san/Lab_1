#include "Person.h"

Person::Person() {}

Person::Person (std::string _first_name, std::string _last_name, std::string _patronymic)
{

    first_name = _first_name;
    last_name = _last_name;
    patronymic = _patronymic;
}

void Person::setFirstame(const std::string & _first_name)
{
    first_name = _first_name;
}

void Person::setLastName(const std::string & _last_name)
{
    last_name = _last_name;
}

void Person::setPatronymic(const std::string & _patronymic)
{
    patronymic = _patronymic;
}

