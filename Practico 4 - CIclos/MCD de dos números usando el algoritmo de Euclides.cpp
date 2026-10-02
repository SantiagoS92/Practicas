#include <iostream>
using namespace std;

int main() {
    int A, B, R;

    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    while (B != 0) {
        R = A % B;
        A = B;
        B = R;
    }

    cout << "El MCD es: " << A << endl;

    return 0;
}
