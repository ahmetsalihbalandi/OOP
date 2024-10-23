#include <iostream>
using namespace std;

int main(){
    int n, sayi;
    cout<<"kac pozitif tam sayi olacagini giriniz: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<". sayiyi giriniz: ";
        cin>>sayi;

        if(sayi%3==0 && sayi%5!=0){
            cout<<sayi<<" Fizz sayidir."<<endl;
        }
        else if(sayi%3!=0 && sayi%5==0){
            cout<<sayi<<" Buzz sayidir."<<endl;
        }
        else if(sayi%3==0 && sayi%5==0){
            cout<<sayi<<" FizzBuzz sayidir."<<endl;
        }
        else{
            cout<<sayi<<" sayisi kosullari saglamiyor."<<endl;
        }
    }
    
    return 0;
}