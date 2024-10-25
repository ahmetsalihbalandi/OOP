#include <iostream>
#include "sensor.hpp"
#include <ctime>
#include <cstdlib>
using namespace std;

double nemOku(){
    return 40.0+rand()%20;
}
double sicaklikOku(){
    return 25.0+rand()%20;
}
void n_alarm(double nem){
    if(nem<60 && nem>30){
        cout<<"Nem orani idealdir"<<endl;
    }
    if(nem<30){
        cout<<"Alarm! Nem orani dusuk"<<endl;
    }
    if(nem>60){
        cout<<"Alarm! Nem orani yuksek"<<endl;
    }
}
void s_alarm(double sicaklik){
    if(sicaklik<30 && sicaklik>16){
        cout<<"Sicaklik seviyesi idealdir"<<endl;
    }
    if(sicaklik<16){
        cout<<"Alarm! Sicaklik seviyesi dusuk"<<endl;
    }
    if(sicaklik>30){
        cout<<"Alarm! Sicaklik seviyesi yuksek"<<endl;
    }
}

int main(){
    srand(time(0));
    double nem=nemOku();
    double sicaklik=sicaklikOku();

    cout<<"Nem oranı: "<<nem<<endl;
    cout<<"Sicaklik seviyesi: "<<sicaklik<<endl;

    n_alarm(nem);
    s_alarm(sicaklik);
    return 0;
}