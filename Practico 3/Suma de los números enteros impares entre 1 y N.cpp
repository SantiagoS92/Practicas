#include <iostream>
using namespace std;

int main() {
    int N, S = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i = i + 2) {
        S = S + i;
    }

    cout << "La suma de los impares es: " << S << endl;

    return 0;
}
