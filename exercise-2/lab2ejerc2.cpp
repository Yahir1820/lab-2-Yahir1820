#include <iostream> 
using namespace std;

int main () {
    int ent = 0;
 
    cout << "Ingrese un entero: ";
    cin >> ent;

    if (ent % 2 == 0) {
        cout << ent <<  " es un numero par." << endl;
    } else if (ent % 2 != 0) {
        cout << ent <<  " es un numero impar." << endl;
    }

    return 0;
}