#include<iostream>
using namespace std;

void insertionsort(int *, int);

int main() {
	// Utwórz tablicê z liczbami nieposortowanymi 
	// (np. niech to bêd¹ liczby ca³kowite)
	// Za³o¿enie: tablica ma mieæ 10 elementów
	int T[10] = { 9, -3, 1, 3, 0, -1, 7, 15, 100, -5 };
	int n = 10; // Wielkoœæ tablicy
	// Wyœwietl tê tablicê (nieposortowan¹)
	cout << "Tablica przed posortowaniem:" << endl;
	// pêtla od...
	for (int i = 0; i < n; i++) {
	//		wyœwietl T[i]
		cout << T[i] << " ";
	}
	cout << endl;
	// Posortuj tablicê
	insertionsort(T, n);
	// Wyœwietl tablicê posortowan¹ w celu sprawdzenia czy sortowanie siê powiod³o
	cout << "Tablica posortowana: " << endl;
	for (int i = 0; i < n; i++) {
		cout << T[i] << " ";
	}
	cout << endl;
	system("PAUSE");
}

void insertionsort(int *T, int n) { // Tablica nie jest przekazywana do funkcji (nie jest robiona jej kopia)
	// tylko przekazywany jest jej wskaŸnik (*T), funkcja nie zwraca wyniku, dlatego typ void
	for (int i = 1; i < n; i++) {
		for (int j = i; j >= 1; j--) {
			if (T[j] < T[j - 1]) {
				int tmp = T[j];
				T[j] = T[j - 1];
				T[j - 1] = tmp;
			}
		}
	}
}
