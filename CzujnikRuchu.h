

#ifndef SYSTEM_ALARMOWY_CZUJNIKRUCHU_H
#define SYSTEM_ALARMOWY_CZUJNIKRUCHU_H


#include "Czujnik.h"
#include <string>

class CzujnikRuchu : public Czujnik {
public:
    CzujnikRuchu(const std::string& n);
    bool sprawdzZdarzenie(RodzajZdarzenia z);
};


#endif //SYSTEM_ALARMOWY_CZUJNIKRUCHU_H
