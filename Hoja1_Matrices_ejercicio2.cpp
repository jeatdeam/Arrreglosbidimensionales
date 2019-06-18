#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main() {
	int n, m, i=0, j=0,o=0,p=0;

	int **MatrizA, **MatrizB;

	cout << "Ingrese el numero de filas ";
	cin >> n;
	cout << "Ingrese el numero de columnas ";
	cin >> m;
	MatrizA = new int*[n];
	MatrizB = new int*[m];

	for (int i = 0; i < n; i++){
			MatrizA[i] = new int[m];
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Ingrese el valor de la posición [" << i << "][" << j << "] : ";
			cin >> MatrizA[i][j];
			o++;
		}
		cout << endl;
		p++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
		cout << MatrizA[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n";
	int q = 0, w = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << MatrizA[j][i] << " ";
			q++;
		}
		cout << endl;
		w++;
	}

	if (o == q && p == w)

		cout << "La traspuesta de la matriz tiene el mismo numero de filas y columnas que la matriz. Por ende, es cuadrada. ";
	else {
		cout << "La matriz no es cuadrada. ";
	}

	_getch();
	return 0;
}
