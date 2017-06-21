
#include "FabrykaCzujnikow.h"
#include "CzujnikDzwieku.h"
#include "CzujnikRuchu.h"

Czujnik *FabrykaCzujnikow::stworzCzujnik(RodzajCzujnika rodzaj, const std::string &nazwa) {
    switch(rodzaj) {
        case CZUJNIK_DZWIEKU:
                return new CzujnikDzwieku(nazwa);
            break;
        case CZUJNIK_RUCHU:
                return new CzujnikRuchu(nazwa);
            break;
    }
    return nullptr;
}
