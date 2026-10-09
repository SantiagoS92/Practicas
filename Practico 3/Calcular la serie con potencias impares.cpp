#include <iostream>
using namespace std;

int main() {
    int N;
    double X, S = 0, P, FAC;

    cout << "Ingrese X: ";
    cin >> X;

    cout << "Ingrese N impar: ";
    cin >> N;

    for (int i = 1; i <= N; i = i + 2) {
        P = 1;
        FAC = 1;

        for (int j = 1; j <= i; j++) {
            P = P * X;
            FAC = FAC * j;
        }

        if ((i - 1) / 2 % 2 == 0) {
            S = S + P / FAC;
        } else {
            S = S - P / FAC;
        }
    }

    cout << "La suma es: " << S << endl;

    return 0;
}
