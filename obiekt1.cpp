#include <iostream>

using namespace std;

class produkt {
    string nazwa;
    int cena;
public:
    produkt() {
    }
    produkt(string n, int c) {
        nazwa = n;
        cena = c;
    }
    int getCena() {
        return cena;
    }
    string getNazwa() {
        return nazwa;
    }
};

void bubbleSort(produkt arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].getCena() < arr[j + 1].getCena()) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main()
{
    produkt t[10];
    int c;
    string n;
    for (int i = 0; i < 10; i++) {
        cout << "podaj nazwe" << endl;
        cin >> n;
        cout << "podaj cene" << endl;
        cin >> c;
        t[i] = produkt(n, c);
    }
    bubbleSort(t, 10);

    for (int i = 0; i < 10; i++) {
        cout << t[i].getNazwa() << " " << t[i].getCena() << endl;
    }

    return 0;
}