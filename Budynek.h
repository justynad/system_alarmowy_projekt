#ifndef SYSTEM_ALARMOWY_BUDYNEK_H
#define SYSTEM_ALARMOWY_BUDYNEK_H

#include "SystemAlarmowy.h"
#include <vector>

class Budynek {
    SystemAlarmowy systemAlarmowy;

public:
    Budynek(const std::string& numer);
    void symuluj();
    void generujZdarzenia();

    SystemAlarmowy& pobierzSystem();

};


#endif //SYSTEM_ALARMOWY_BUDYNEK_H
