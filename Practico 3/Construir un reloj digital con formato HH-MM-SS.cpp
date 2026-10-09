#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int H = 0; H < 24; H++) {
        for (int M = 0; M < 60; M++) {
            for (int S = 0; S < 60; S++) {
                cout << setfill('0') << setw(2) << H << ":"
                     << setw(2) << M << ":"
                     << setw(2) << S << endl;
            }
        }
    }

    return 0;
}
