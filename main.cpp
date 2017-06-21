#include <iostream>
#include "Budynek.h"
#include "FabrykaCzujnikow.h"

int main() {

    Budynek budynek("+48 555 444 333");

    budynek.pobierzSystem().dodajCzujnik(FabrykaCzujnikow::stworzCzujnik(CZUJNIK_RUCHU, "Salon"));
    budynek.pobierzSystem().dodajCzujnik(FabrykaCzujnikow::stworzCzujnik(CZUJNIK_DZWIEKU, "Kuchnia"));
    budynek.pobierzSystem().dodajNumerDoSystemu("997");
    budynek.pobierzSystem().dodajNumerDoSystemu("112");

    budynek.symuluj();

    return 0;
}
