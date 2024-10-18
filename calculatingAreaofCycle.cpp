#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int radius;
    double area;
    cout << "Dairenin yaricapini giriniz: ";
    cin >> radius;

    area = (3.14)*pow(radius,2);

    cout << "Dairenin alani: " << area << endl;
    return 0;
}