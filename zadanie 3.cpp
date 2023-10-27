#include <iostream>

using namespace std;

double kmToMiles(double km) {
    return km * 0.621371;
}

double kmToNautMiles(double km) {
    return km * 0.539957;
}

int main() {
    double km;

    cout << "Podaj odleglosc w kilometrach: ";
    cin >> km;

    double miles = kmToMiles(km);
    double nautmiles = kmToNautMiles(km);

    cout << km << " kilometrow to " << miles << " mil lądowych." << endl;
    cout << km << " kilometrow to " << nautmiles << " mil morskich." << endl;

    return 0;
}