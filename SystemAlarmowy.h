#ifndef SYSTEM_ALARMOWY_SYSTEMALARMOWY_H
#define SYSTEM_ALARMOWY_SYSTEMALARMOWY_H


#include <vector>
#include "Czujnik.h"
#include "Syrena.h"
#include "CentralaTelefoniczna.h"


class SystemAlarmowy {
    std::vector<Czujnik*> czujniki;
    Syrena syrena;
    CentralaTelefoniczna centrala;

    RodzajZdarzenia zdarzenie   = BRAK_ZDARZENIA;
public:
    SystemAlarmowy(const std::string& numerTelefonu);
    void ustawZdarzenie(RodzajZdarzenia z);
    void sprawdzCzujniki();
    void dodajCzujnik(Czujnik* cz);
    void dodajNumerDoSystemu(const std::string& numer);


    ~SystemAlarmowy();
};


#endif //SYSTEM_ALARMOWY_SYSTEMALARMOWY_H
