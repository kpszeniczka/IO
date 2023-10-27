#include <iostream>

using namespace std;

int main() {
    for (int i = 301; i <= 1200; i++) {
        if (i % 2 != 0) {
            cout << i;
            if (i % 100 == 0) {
                cout << " *** ";
            }
            else if (i % 400 == 0) {
                cout << endl;
            }
            else {
                cout << " ";
            }
        }
    }

    return 0;
}