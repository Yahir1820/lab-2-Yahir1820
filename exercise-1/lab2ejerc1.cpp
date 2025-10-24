#include <iostream>
using namespace std;

int main () {
    int num[3];
    int suma = 0;
    int promedio = 0;
    int producto = 1;

    cout << "Ingrese 3 numeros enteros: " << endl;
    for ( int i = 1; i <= 3; i++) {
        cout << "Numero " << i << ": ";
        cin >> num[i];

        suma += num[i];
    }

    cout << "La suma es: " << suma << endl;

    promedio = suma/3;
    cout << "El promedio es: " << promedio << endl;

    for ( int i = 1; i <= 3; i++) {
        producto = num[i] * producto;
    }
    cout << "El producto es: " << producto << endl;

    return 0;
}