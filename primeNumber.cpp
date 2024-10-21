#include <iostream>
using namespace std;

int main(){

    int sayi, i;
    bool asal=1;

    cout<<"bir tam sayi giriniz: ";
    cin>>sayi;

    if(sayi<=1)
    asal=0;
    else{
        for (i = 2; i <=sayi/2; i++)
        {
            if (sayi % i==0){
                asal=0; break;
            }
        }
        
    }

    if(asal==1)
    cout<<sayi<<" asal sayidir."<<endl;
    else cout<<sayi<<" asal sayi degildir."<<endl;
    

    return 0;
}