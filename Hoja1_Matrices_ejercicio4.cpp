#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>

//#define filas 5
//#define columnas 12
using namespace std;


int main() {
	//Random f;
	int **Matriz;
	Matriz = new int*[5];

	for (int i = 0; i < 5; i++) {

		Matriz[i] = new int[12];

	}

	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 12; j++) {

			Matriz[i][j] = 1 + rand() % (9+1-1);

		}
		
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 12; j++) {

			cout <<" "<< Matriz[i][j] << " ";
		
		}
		
		cout << "\n";
	}

	int total = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 12; j++) {

			total += Matriz[i][j];
		}	
		cout << "La agencia " << i + 1 << " vendio: " << total;
		total = 0;
		cout << "\n";
	}
	int totalD = 0;
	for (int i = 0; i < 5; i++) {

			total += Matriz[i][11];
		}
	cout << "El promedio que vendio en el mes de diciembre es: " << total / 12;

	_getch();
	return 0;
}
