#include <iostream>
using namespace std;

int main(){
    int sayi, i;
    double faktoriyel=1;

    cout<<"Pozitif tam sayi giriniz: ";
    cin>>sayi;

    if(sayi<0){
        cout<<"negatif sayilar gecersizdir.";
    }
    else{
        for(i=1;i<=sayi;i++){
            faktoriyel*=i;
        }
    }
    cout<<"sonuc: "<<faktoriyel<<endl;
}