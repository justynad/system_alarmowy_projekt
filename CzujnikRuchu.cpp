#include "CzujnikRuchu.h"

CzujnikRuchu::CzujnikRuchu(const std::string &n) : Czujnik(n) {

}

bool CzujnikRuchu::sprawdzZdarzenie(RodzajZdarzenia z) {
    if(z == WYKRYTO_RUCH) {
        return true;
    }

    return false;
}