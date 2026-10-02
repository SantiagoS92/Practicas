#include <iostream>
using namespace std;

int main() {
    int N, F0 = 1, F1 = 1, F;

    cout << "Ingrese N: ";
    cin >> N;

    if (N == 0) {
        F = F0;
    } else if (N == 1) {
        F = F1;
    } else {
        for (int i = 2; i <= N; i++) {
            F = F0 + F1;
            F0 = F1;
            F1 = F;
        }
    }

    cout << "El numero de Fibonacci es: " << F << endl;

    return 0;
}
