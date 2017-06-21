#include "SystemAlarmowy.h"
#include <iostream>
#include <cstdlib>

void SystemAlarmowy::ustawZdarzenie(RodzajZdarzenia z) {
    zdarzenie = z;
}

void SystemAlarmowy::sprawdzCzujniki() {
    /**
     * Chcemy zasymulowac zdarzenie w jakims pomieszczeniu
     * Nie mozemy sprawdzic stanu wszystkich czujnik dla danego zdarzenia bo nie bedzie to odpowiadalo zdarzeniu
     * w losowym pomieszczeniu. Zeby to zasymulowac wybieramy losowy czujnik i sprawdzamy czy moze wykryc zdarzenie
     * ktore nastapilo
     */

    // losowy numer czujnika
    unsigned long int numer = rand() % (czujniki.size());

    // spradzamy czy losow czyujnik cos wykryl
    if(czujniki[numer]->sprawdzZdarzenie(zdarzenie)) {
        std::cout << "Czujnik " << czujniki[numer]->pobierzNazwe() << " wykryl zdarzenie typu: ";
        if(zdarzenie == WYKRYTO_RUCH) {
            std::cout << "ruch\n";
        } else if(zdarzenie == WYKRYTO_DZWIEK) {
            std::cout << "dzwiek\n";
        }

        syrena.wlaczSyrene();
        centrala.wyslijWiadomosc(czujniki[numer]->pobierzNazwe(), zdarzenie);
    } else {
        std::cout << "Zaden czujnik nie zostal uruchomiony\n\n";
    }
    syrena.dzialanieSyrena();
    centrala.dzialanie();
}

void SystemAlarmowy::dodajCzujnik(Czujnik *cz) {
    czujniki.push_back(cz);
}

SystemAlarmowy::SystemAlarmowy(const std::string &numerTelefonu) : centrala(numerTelefonu) {

}

void SystemAlarmowy::dodajNumerDoSystemu(const std::string &numer) {
    centrala.dodajNumer(numer);
}

SystemAlarmowy::~SystemAlarmowy() {
    for(int i = 0; i < czujniki.size(); i++) {
        delete czujniki[i];
    }
}
