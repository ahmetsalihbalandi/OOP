#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Bir tam sayi giriniz: ";
    cin >> number;

    if (number >= 90 && number <= 100)
        cout << "Harf notu: A" << endl;
    else if(number >= 80 && number < 90)
        cout << "Harf notu: B" << endl;
    else if(number >= 70 && number < 80)
        cout << "Harf notu: C" << endl;
    else if(number >= 60 && number < 70)
        cout << "Harf notu: D" << endl;
    else if(number >= 0 && number < 60)
        cout << "Harf notu: F" << endl;
    else
        cout << "Girdiğiniz sayi geçersiz." << endl;

    return 0;
}
