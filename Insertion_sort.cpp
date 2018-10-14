#include<iostream>
using namespace std;

void insertionsort(int *, int);

int main() {
	// Utw�rz tablic� z liczbami nieposortowanymi 
	// (np. niech to b�d� liczby ca�kowite)
	// Za�o�enie: tablica ma mie� 10 element�w
	int T[10] = { 9, -3, 1, 3, 0, -1, 7, 15, 100, -5 };
	int n = 10; // Wielko�� tablicy
	// Wy�wietl t� tablic� (nieposortowan�)
	cout << "Tablica przed posortowaniem:" << endl;
	// p�tla od...
	for (int i = 0; i < n; i++) {
	//		wy�wietl T[i]
		cout << T[i] << " ";
	}
	cout << endl;
	// Posortuj tablic�
	insertionsort(T, n);
	// Wy�wietl tablic� posortowan� w celu sprawdzenia czy sortowanie si� powiod�o
	cout << "Tablica posortowana: " << endl;
	for (int i = 0; i < n; i++) {
		cout << T[i] << " ";
	}
	cout << endl;
	system("PAUSE");
}

void insertionsort(int *T, int n) { // Tablica nie jest przekazywana do funkcji (nie jest robiona jej kopia)
	// tylko przekazywany jest jej wska�nik (*T), funkcja nie zwraca wyniku, dlatego typ void
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
