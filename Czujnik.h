#ifndef SYSTEM_ALARMOWY_CZUJNIK_H
#define SYSTEM_ALARMOWY_CZUJNIK_H

#include <string>

enum RodzajZdarzenia {
    BRAK_ZDARZENIA,
    WYKRYTO_DZWIEK,
    WYKRYTO_RUCH
};

class Czujnik {
protected:
    std::string nazwa;
public:
    Czujnik(const std::string& n);
    virtual bool sprawdzZdarzenie(RodzajZdarzenia z) = 0;

    const std::string& pobierzNazwe();

    virtual ~Czujnik();
};


#endif //SYSTEM_ALARMOWY_CZUJNIK_H
