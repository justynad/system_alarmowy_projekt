#ifndef SYSTEM_ALARMOWY_FABRYKACZUJNIKOW_H
#define SYSTEM_ALARMOWY_FABRYKACZUJNIKOW_H


#include "Czujnik.h"

enum RodzajCzujnika {
    CZUJNIK_DZWIEKU,
    CZUJNIK_RUCHU
};

class FabrykaCzujnikow {
public:
    static Czujnik* stworzCzujnik(RodzajCzujnika rodzaj, const std::string& nazwa);
};


#endif //SYSTEM_ALARMOWY_FABRYKACZUJNIKOW_H
