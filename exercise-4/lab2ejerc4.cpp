#include <iostream>
using namespace std;

int main () {
    int nums[3];

    cout << "Ingrese 3 valores: ";
    for (int i = 0; i < 3; i++) {
        cin >> nums[i];
    } 

    int mayor = nums[0];
    int menor = nums[0];
    for (int i = 1; i < 3; i++) {
        if (nums[i] > mayor)
            mayor = nums[i];
        if (nums[i] < menor)
            menor = nums[i];
    }
    
    for ( int i = 0; i < 3; i++) {
        if (mayor > nums[i] && nums[i] > menor) {
            cout << "El numero del medio es: " << nums[i];
        }
    }


    return 0;
}