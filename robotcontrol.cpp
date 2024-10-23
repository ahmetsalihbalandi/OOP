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

//"hedef 'eksen' ekseninde 'hedef' hedefine hareket ettiriliyor" şeklinde çıktı alınacak şekilde düzeltilmesi gerekiyor