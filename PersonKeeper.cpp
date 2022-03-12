#include "PersonKeeper.h"

PersonKeeper::PersonKeeper() {};

PersonKeeper::~PersonKeeper() {};

PersonKeeper &PersonKeeper::Instance()
{
    static PersonKeeper instance;
    return instance;
}
/*
void PersonKeeper::readPersons(std::string path)
{
    std::ifstream tmp;

}
*/
