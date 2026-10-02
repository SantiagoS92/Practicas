#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, FAC = 1;
    float X, S = 0;

    cout << "Ingrese X: ";
    cin >> X;

    cout << "Ingrese N (impar): ";
    cin >> N;

    for (int i = 1; i <= N; i = i + 2) {
        FAC = 1;

        for (int j = 1; j <= i; j++) {
            FAC = FAC * j;
        }

        if ((i / 2) % 2 == 0) {
            S = S + pow(X, i) / FAC;
        } else {
            S = S - pow(X, i) / FAC;
        }
    }

    cout << "La suma es: " << S << endl;

    return 0;
}
