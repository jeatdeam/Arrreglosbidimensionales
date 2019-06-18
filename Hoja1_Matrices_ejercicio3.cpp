#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main() {
	int n, m, i = 0, j = 0;

	int **MatrizA;

	cout << "Ingrese el numero de filas ";
	cin >> n;
	cout << "Ingrese el numero de columnas ";
	cin >> m;
	MatrizA = new int*[n];

	for (int i = 0; i < n; i++) {
		MatrizA[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Ingrese el valor de la posición [" << i << "][" << j << "] : ";
			cin >> MatrizA[i][j];
	
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << MatrizA[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n";
	cout << "La traspuesta de la matriz [" << n << "][" << m << "] :" << endl;
	cout << "\n";
	int q = 0, w = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << MatrizA[j][i] << " ";
		}
		cout << endl;
	}

	_getch();
	return 0;
}