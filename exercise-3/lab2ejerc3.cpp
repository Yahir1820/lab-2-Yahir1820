#include <iostream>
using namespace std;

int main () {
    int nums = 0;

    cout << "Ingresa un numero de 5 digitos: ";
    cin >> nums;

    if (nums >= 10000 && nums <= 99999) {
        int d1 = nums / 10000;
        int d2 = (nums / 1000) % 10;
        int d3 = (nums / 100) % 10;
        int d4 = (nums / 10) % 10;
        int d5 = nums % 10;

        cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;
    }


    return 0;
}