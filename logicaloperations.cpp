#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Bir tam sayi giriniz: ";
    cin>>number;

    if(number>0)
    cout<<"Sayi pozitif";
    else if(number==0)
    cout<<"Sayi notr";
    else if(number<0)
    cout<<"Sayi negatif";
    else
    cout<<"yanlis ifade";
    return 0;
}