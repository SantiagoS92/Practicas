#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    float X, S = 0;

    cout << "Ingrese X: ";
    cin >> X;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        S = S + pow(X, i);
    }

    cout << "La suma es: " << S << endl;

    return 0;
}
