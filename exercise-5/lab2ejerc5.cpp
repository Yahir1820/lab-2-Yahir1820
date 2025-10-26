#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int x[6] = {0, 1, 2, 3, 4, 5};
    int f[6];

    cout << "x   f(x)" << endl << "----------" << endl;
    for (int i = 0; i < 6; i++) {
        f[i] = pow(x[i], 3 ) - pow(x[i], 2 ) + 5;
        cout << x[i] << "   " << f[i] << endl;
    }
    return 0;
}