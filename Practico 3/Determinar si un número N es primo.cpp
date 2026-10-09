#include <iostream>
using namespace std;

int main() {
    int N, D = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            D++;
        }
    }

    if (D == 2) {
        cout << "El numero es primo" << endl;
    } else {
        cout << "El numero no es primo" << endl;
    }

    return 0;
}
