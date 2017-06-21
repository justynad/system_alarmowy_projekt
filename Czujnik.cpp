#include "Czujnik.h"


Czujnik::Czujnik(const std::string &n) : nazwa(n)
{
}

const std::string& Czujnik::pobierzNazwe() {
    return nazwa;
}

Czujnik::~Czujnik() {

}
