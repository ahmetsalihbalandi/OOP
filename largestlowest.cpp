#include <iostream>
using namespace std;

int main(){

    int n, sayi, enbuyuk, enkucuk;

    cout<<"kaç tane sayi gireceksiniz? ";
    cin>>n;

    cout<<"1. sayiyi giriniz: ";
    cin>>sayi;
    enbuyuk=enkucuk=sayi;

    for (int i = 1; i < n; i++)
    {
        cout<<i+1<<". sayiyi giriniz: ";
        cin>>sayi;
        if (sayi>enbuyuk)
        enbuyuk=sayi;
        if (sayi<enkucuk)
        enkucuk=sayi;
    }
    

    cout<<enbuyuk<<" en buyuk sayidir."<<endl<<enkucuk<<" en kucuk sayidir."<<endl;
    

    return 0;
}