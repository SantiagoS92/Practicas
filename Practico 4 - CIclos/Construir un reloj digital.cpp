#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    for (int H = 0; H < 24; H++) {
        for (int M = 0; M < 60; M++) {
            for (int S = 0; S < 60; S++) {

                cout << "\r"
                     << setfill('0') << setw(2) << H << ":"
                     << setw(2) << M << ":"
                     << setw(2) << S;

                this_thread::sleep_for(chrono::seconds(1));
            }
        }
    }

    return 0;
}
