#ifndef SYSTEM_ALARMOWY_CENTRALATELEFONICZNA_H
#define SYSTEM_ALARMOWY_CENTRALATELEFONICZNA_H


#include <string>
#include <vector>
#include "Czujnik.h"

class CentralaTelefoniczna {
    std::vector<std::string> numery;
    int licznik = 0;
public:
    CentralaTelefoniczna(const std::string &numer);
    void wyslijWiadomosc(const std::string& nazwaCzujnika, RodzajZdarzenia z);
    void dodajNumer(const std::string& n);
    void dzialanie();
};


#endif //SYSTEM_ALARMOWY_CENTRALATELEFONICZNA_H
