#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "birinci sayiyi girin: ";
    cin >> a;
    cout << "ikinci sayiyi girin: ";
    cin >> b;
    cout << "toplam: " << a+b << endl;
    cout << "fark: " << a-b << endl;
    cout << "carpim: " << a*b << endl;
    cout << "bölüm: " << static_cast<float>(a)/b << endl;
    return 0;
    }