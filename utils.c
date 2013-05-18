#include "utils.h"

void delay(int _ms)
{
    usleep(_ms*1000);
}

void delayMicroseconds(int _ms)
{
    usleep(_ms);
}

void nc(const char* _fonctionName)
{
    printf(_r_"Warning"_n_" : La fonction "_B_"%s()"_nB_" n'a pas été interprétée par Simuduino.\n", _fonctionName);
}

// Fonctions non-reconnues

void pinMode(int a, int b) {nc("pinMode");}
void digitalWrite(int a, int b) {nc("digitalWrite");}

