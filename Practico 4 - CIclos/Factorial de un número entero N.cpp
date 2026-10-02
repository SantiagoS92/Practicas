#include <iostream>
using namespace std;

int main() {
    int N, FAC = 1;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        FAC = FAC * i;
    }

    cout << "El factorial es: " << FAC << endl;

    return 0;
}
