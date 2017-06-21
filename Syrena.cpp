#include "Syrena.h"
#include <iostream>

void Syrena::wlaczSyrene() {
    licznik = 5;
}

void Syrena::dzialanieSyrena() {
    if(licznik > 0) {
        licznik--;
        std::cout << "Uruchomiona syrena\n";
    }
}
