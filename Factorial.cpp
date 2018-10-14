#include<iostream>
using namespace std;

double silnia(int); // Prototyp funkcji - program wie, �e napotka funkcj� silnia(int) p�niej

int main() {
	
	// Zadeklaruj n
	int n;

	// Wy�wietl informacj� pocz�tkow�
	cout << "Program liczy silni� podanej liczby naturalnej n.";
	cout << endl;
	cout << "Podaj n = ";
	// Wczytaj n z klawiatury
	cin >> n;
	// Sprawd� czy n>=0
	if (n >= 0) {
		// Je�eli tak, to policz n!
		// Wypisz wynik
		cout << "Wynik = " << silnia(n) << endl;
	}
	else {
		// Je�eli nie, to zako�cz program z komunikatem b��du
		cout << "Blad: n nie moze byc ujemne!" << endl;
	}
	system("PAUSE"); // Program czeka na naci�ni�cie dowolnego klawisza przed zamkni�ciem
}

double silnia(int n) {
	// Sprawdz czy n=0?
	double wynik;
	if (n == 0) {
		// Je�li tak, to wynik=1
		wynik = 1;
	}
	else {
		// Je�li nie, to wynik = 1*2*3*...*n
		// p�tla od i=1 do n, kt�ra policzy silni�
		wynik = 1;
		for (int i = 1; i <= n; i++) {
			wynik = wynik * i;
		}
	}
	return(wynik);
}