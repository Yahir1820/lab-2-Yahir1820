#include <iostream>
using namespace std;

int main () {
    int ent[3];
    int nums = 0;

    cout << "Ingresa 3 numeros enteros de un digito: ";
    for (int i = 0; i < 3; i++) {
    cin >> ent[i];
    }

    if (0 <= ent[0] < 10 && 0 <= ent[1] < 10 && 0 <= ent[2] < 10) {
    int a = ent[0] * 100;
    int b = ent[1] * 10;
    int c = ent[2];
    cout << a + b + c << endl;
    } else {
        cout << "Ingrese digitos validos";
    }

    cout << "Ingrese un numero de 5 digitos: ";
    cin >> nums;
    if (nums >= 10000 && nums <= 99999) {
        int d1 = nums / 10000;
        int d2 = (nums / 1000) % 10;
        int d3 = (nums / 100) % 10;
        int d4 = (nums / 10) % 10;
        int d5 = nums % 10;

        cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;
    } else {
        cout << "Ingrese un valor de 5 digitos.";
    }

   
    return 0;
}