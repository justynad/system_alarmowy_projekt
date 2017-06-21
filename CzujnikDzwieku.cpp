#include "CzujnikDzwieku.h"

bool CzujnikDzwieku::sprawdzZdarzenie(RodzajZdarzenia z) {
    if(z == WYKRYTO_DZWIEK) {
        return true;
    }

    return false;
}

CzujnikDzwieku::CzujnikDzwieku(const std::string n) : Czujnik(n) {

}
