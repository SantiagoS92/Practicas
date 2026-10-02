#include <iostream>
using namespace std;

int main() {
    int N, divisores = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        cout << N << " es primo." << endl;
    } else {
        cout << N << " no es primo." << endl;
    }

    return 0;
}
