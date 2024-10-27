#include <iostream>
#include "irrigationSensors.hpp"
using namespace std;

double okuNem(){
    return 30.0+rand()%20;
}
double okuSicaklik(){
    return 30.0+rand()%20;
}
double okuToz(){
    return 10.0+rand()%20;
}
void alarmDurumu(double nem, double n_esik, double sicaklik, double s_esik, double toz, double t_esik, bool &alarm){
    if(nem<n_esik || sicaklik>s_esik || toz>t_esik)
    alarm=1;
}