#ifndef IRRIGATIONSENSORS_H
#define IRRIGATIONSENSORS_H

double okuToz();
double okuSicaklik();
double okuNem();

void alarmDurumu(double nem, double n_esik, double sicaklik, double s_esik, double toz, double t_esik, bool &alarm);

#endif