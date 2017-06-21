#ifndef SYSTEM_ALARMOWY_CZUJNIKDZWIEKU_H
#define SYSTEM_ALARMOWY_CZUJNIKDZWIEKU_H


#include "Czujnik.h"

class CzujnikDzwieku : public Czujnik {
public:
    CzujnikDzwieku(const std::string n);
    bool sprawdzZdarzenie(RodzajZdarzenia z);
};


#endif //SYSTEM_ALARMOWY_CZUJNIKDZWIEKU_H
