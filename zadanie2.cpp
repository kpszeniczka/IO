#include <iostream>

using namespace std;

int main()
{
    int AA[10];
    int n;
    int sizeb = 0;
    int pominieto = 0;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        AA[10] = n;
        if (n < 0) sizeb++;
    }
    int* BB = new int(sizeb);
    int idx = 0;
    for (int i = 0; i < 10; i++) {
        if (AA[i] < 0) {
            BB[idx] = AA[i];
            idx++;
        }
        else {
            pominieto++;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << BB[i] << endl;
    }
    cout << idx << pominieto << endl
    

    delete BB;
    return 0;
}