#include <iostream>
#include <ctime>
#include <cstdlib>
#include "irrigationSensors.hpp"
using namespace std;


int main(){
    double nem, n_esik, sicaklik, s_esik, toz, t_esik;
    bool alarm=0;
    srand(time(0));

    nem=okuNem();
    sicaklik=okuSicaklik();
    toz=okuToz();
    n_esik=30.0;
    s_esik=30.0;
    t_esik=20.0;
    cout<<"Sicaklik: "<<sicaklik<<" derece"<<endl;
    cout<<"Nem: %"<<nem<<endl;
    cout<<"Toz: %"<<toz<<endl;
    alarmDurumu(nem,n_esik,sicaklik,s_esik,toz,t_esik,alarm);

    if (alarm==1){
        cout<<"ALARM! Bitkileri sulayiniz."<<endl;
    }
    else{
        cout<<"Bitkileriniz ideal şartlar altinda."<<endl;
    }


    return 0;
}