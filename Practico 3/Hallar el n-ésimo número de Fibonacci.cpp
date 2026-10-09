#include <iostream>
using namespace std;

int main() {
    int N, A = 1, B = 1, C;

    cout << "Ingrese N: ";
    cin >> N;

    if (N == 0 || N == 1) {
        cout << "Fibonacci: 1" << endl;
    } else {
        for (int i = 2; i <= N; i++) {
            C = A + B;
            A = B;
            B = C;
        }

        cout << "Fibonacci: " << B << endl;
    }

    return 0;
}
