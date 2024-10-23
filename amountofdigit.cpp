#include <iostream>
using namespace std;

int main(){
    long int sayi,count;

    while(true){
        cout<<"Bir pozitif tam sayi giriniz: ";
        cin>>sayi;
        if (sayi<=0){
        cout<<"Geçersiz sayiyi girdiniz."<<endl;
        }

        else if (sayi>0){
            while(sayi>0){
                sayi=sayi/10;
                count++;
            }
        break;
        }
    }

    cout<<"Sayinin basamak adedi: "<<count<<endl;

    return 0;
}