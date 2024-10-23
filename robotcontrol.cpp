#include <iostream>
using namespace std;

void hareketEttir(int eksen, int hedef){
    if(hedef>eksen){
        eksen++;
    }
    else if(hedef<eksen){
        eksen--;
    }
    else{
        cout<<"hedefe ulaştin."<<endl;
    }
}

//Hocanın istediği kod dusundugumden cok basitmis, hedef "eksen" ekseninde "hedef" hedefine hareket ettiriliyor, şeklinde yazdıracakmışız