#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, FAC = 1;
    float X, S = 0;

    cout << "Ingrese X: ";
    cin >> X;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        FAC = FAC * i;
        S = S + pow(X, i) / FAC;
    }

    cout << "La suma es: " << S << endl;

    return 0;
}
