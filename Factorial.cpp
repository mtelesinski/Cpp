#include<iostream>
using namespace std;

double silnia(int); // Prototyp funkcji - program wie, ¿e napotka funkcjê silnia(int) póŸniej

int main() {
	
	// Zadeklaruj n
	int n;

	// Wyœwietl informacjê pocz¹tkow¹
	cout << "Program liczy silniê podanej liczby naturalnej n.";
	cout << endl;
	cout << "Podaj n = ";
	// Wczytaj n z klawiatury
	cin >> n;
	// SprawdŸ czy n>=0
	if (n >= 0) {
		// Je¿eli tak, to policz n!
		// Wypisz wynik
		cout << "Wynik = " << silnia(n) << endl;
	}
	else {
		// Je¿eli nie, to zakoñcz program z komunikatem b³êdu
		cout << "Blad: n nie moze byc ujemne!" << endl;
	}
	system("PAUSE"); // Program czeka na naciœniêcie dowolnego klawisza przed zamkniêciem
}

double silnia(int n) {
	// Sprawdz czy n=0?
	double wynik;
	if (n == 0) {
		// Jeœli tak, to wynik=1
		wynik = 1;
	}
	else {
		// Jeœli nie, to wynik = 1*2*3*...*n
		// pêtla od i=1 do n, która policzy silniê
		wynik = 1;
		for (int i = 1; i <= n; i++) {
			wynik = wynik * i;
		}
	}
	return(wynik);
}