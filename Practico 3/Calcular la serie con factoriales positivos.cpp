#include <iostream>
using namespace std;

int main() {
    int N;
    double X, S = 0, P = 1, FAC = 1;

    cout << "Ingrese X: ";
    cin >> X;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        P = P * X;
        FAC = FAC * i;
        S = S + P / FAC;
    }

    cout << "La suma es: " << S << endl;

    return 0;
}
