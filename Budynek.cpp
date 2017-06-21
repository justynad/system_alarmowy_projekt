#include "Budynek.h"
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>


void Budynek::symuluj() {
    while(true) {
        generujZdarzenia();
        systemAlarmowy.sprawdzCzujniki();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // uspi program na 1 sekunde
    }
}
void Budynek::generujZdarzenia() {
    int szansaNaZdarzenie = rand() % 2;

    if(szansaNaZdarzenie == 0) {
        systemAlarmowy.ustawZdarzenie(BRAK_ZDARZENIA);
        return;
    }

    szansaNaZdarzenie = rand() % 2;
    //std::cout << "Szansa na rodzaj zdarzenia: " << szansaNaZdarzenie << std::endl;
    if(szansaNaZdarzenie == 0) {
        systemAlarmowy.ustawZdarzenie(WYKRYTO_DZWIEK);
    } else {
        systemAlarmowy.ustawZdarzenie(WYKRYTO_RUCH);
    }

}

SystemAlarmowy& Budynek::pobierzSystem() {
    return systemAlarmowy;
}

Budynek::Budynek(const std::string &numer) : systemAlarmowy(numer) {
    srand(time(0));
}
