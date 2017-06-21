#include "CentralaTelefoniczna.h"
#include <iostream>

CentralaTelefoniczna::CentralaTelefoniczna(const std::string &numer) {
    numery.push_back(numer);
}

void CentralaTelefoniczna::wyslijWiadomosc(const std::string &nazwaCzujnika, RodzajZdarzenia z) {
    if(licznik == 0) {
        for (int i = 0; i < numery.size(); i++) {
            std::cout << "Centrala wyslala wiadomosc pod numer " << numery[i] << "\nO tresci: czujnik" << nazwaCzujnika
                      << " wykryl zdarzenie: ";
            if (z == WYKRYTO_RUCH) {
                std::cout << " ruch.\n";
            } else if (z == WYKRYTO_DZWIEK) {
                std::cout << " dzwiek.\n";
            }
        }
        licznik = 15;
    }
}

void CentralaTelefoniczna::dodajNumer(const std::string &n) {
    numery.push_back(n);
}

void CentralaTelefoniczna::dzialanie() {
    if(licznik > 0) {
        licznik--;
    }
}
