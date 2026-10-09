#include <iostream>
using namespace std;

int main() {
    int A, B, X, Y, R, MCD, MCM;

    cout << "Ingrese dos numeros: ";
    cin >> A >> B;

    X = A;
    Y = B;

    while (Y != 0) {
        R = X % Y;
        X = Y;
        Y = R;
    }

    MCD = X;
    MCM = (A * B) / MCD;

    cout << "El MCM es: " << MCM << endl;

    return 0;
}
