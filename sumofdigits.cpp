#include <iostream>
using namespace std;

int main(){
    long int sayi,digits,digit_number,sum=0;

    cout<<"Bir tam sayi giriniz: ";
    cin>>sayi;

    while (sayi>0)
    {
        digit_number=sayi%10;
        sum+=digit_number;
        sayi=(sayi-digit_number)/10;
        digits++;
    }
    
    cout<<"Girdiginiz sayinin basamak sayisi: "<<digits<<endl<<"Basamaklarinin toplami: "<<sum<<endl;


    return 0;
}