#include <iostream>
using namespace std;

int main(){

    int n,a=0,b=1,c;
    cout<<"bir tamsayi giriniz: ";
    cin>>n;

    if(n<=2) cout<<"yeterli terim yok";
    else{
        cout<<"fibonacci dizisi: "<<a<<", "<<b;
        for(int i=2;i<n;i++){
            c=a+b;
            cout<<", "<<c;
            a=b;
            b=c;
        }
    }

    return 0;
}