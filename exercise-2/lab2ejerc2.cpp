#include <iostream> 
using namespace std;

int main () {
    int ent[2];

    cout << "Ingrese dos enteros: ";
    for (int i = 0; i < 2; i++ )  {
        cin >> ent[i];
    }
    
    if (ent[1] == 0) {
        cout << "Ingrese un segundo entero valido" << endl; 
    } else if (ent[0] % ent[1] == 0) {
        cout << ent[0] <<  " es multiplo de " << ent[1] << endl;
    } else if (ent[0] % ent[1] != 0) {
        cout << ent[0] <<  " no es multiplo de " << ent[1] << endl;
    }

    return 0;
}