#include <iostream>
#include <string>

using namespace std;

class Faktura {
	string daneklienta;
	int nrfaktury;
	float kwota;
	bool zaplacona;
public:
	Faktura() {
		daneklienta = "";
		nrfaktury = 0;
		kwota = 0;
		zaplacona = false;
	}
	void dodaj(string d, int nr, float k, bool z) {
		this->daneklienta = d;
		this->nrfaktury = nr;
		this->kwota = k;
		this->zaplacona = z;
	}
	void oplac() {
		zaplacona = true;
	}
	void zmiendane(string d, float k) {
		this->daneklienta = d;
		this->kwota = k;
		zaplacona = false;
	}
	void wyswietl() {
		cout << "Faktura nr: " << nrfaktury << endl << "Na nazwisko: " << daneklienta << endl << "Kwota: " << kwota << endl << "Czy opłacona: " << zaplacona;
	}
};


int main() {
	
	Faktura f1;

	f1.dodaj("Jan Kowalski", 291723, 1231.123, 1);

	f1.wyswietl();

	return 0;
}