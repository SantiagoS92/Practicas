#include <iostream>
using namespace std;

int main() {
    int N;
    int P = 1;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        P = P * i;
    }

    cout << "El producto es: " << P << endl;

    return 0;
}
