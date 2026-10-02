#include <iostream>
using namespace std;

int main() {
    int A, B, MCD, MCM, R;

    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    int X = A;
    int Y = B;

    while (Y != 0) {
        R = X % Y;
        X = Y;
        Y = R;
    }

    MCD = X;
    MCM = (A * B) / MCD;

    cout << "El MCD es: " << MCD << endl;
    cout << "El MCM es: " << MCM << endl;

    return 0;
}
