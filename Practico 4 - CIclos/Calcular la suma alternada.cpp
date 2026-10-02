#include <iostream>
using namespace std;

int main() {
    int N, S = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            S = S - i;
        } else {
            S = S + i;
        }
    }

    cout << "La suma es: " << S << endl;

    return 0;
}
