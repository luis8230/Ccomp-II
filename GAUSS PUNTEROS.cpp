#include <iostream>

using namespace std;

int n=3;int m=4;

void imprimir(double **arr) {
  for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
		  cout<<*(*(arr + i)+j)<<" ";
		  }
		  cout<<endl;
    }
}

void operar_fila(double arr[][4], double a, int x, double b, int y) {
    //matriz, coeficiente fila en la que se resta, fila en la que se resta, coeficiente fila que se resta, fila que se resta
    int cont = 0;
    for (double *i = *arr + 4; i<(*arr + x) + 7; i++, cont++) {
	   *i = (a * (*i)) - (b * *((*arr + y) + cont));
    }
}

void to_one(double arr[][4], int i) {
    double *a = *(arr + i) + i;
    if (*a == 0) {
	   *a = *a;
    }
    else {
	   double aux;
	   aux = 1 / *(*(arr + i) + i);
	   for (int x = 0; x < 4; x++)
		  *(*(arr + i) + x) *= aux;
    }
}

/*void gauss(double arr[][4]) {
    int aux = 0;
    for (double(*i)[4] = arr; aux<3; aux++) {
	   for (int cont = 0; i < arr + 3; i++, cont++) {
		  if (*(*i + aux) == *(*(arr + cont) + cont) && *(*i + aux) != 1) {
			 to_one(arr, cont);
			 imprimir(arr, 12);
			 continue;
		  }

		  else if ((*(*i + aux) == *(*(arr + cont) + cont) && *(*i + aux) == 1) || *(*i + aux) == 0) {
			 imprimir(arr, 12);
			 continue;
		  }

		  operar_fila(arr, 1, cont, *(*i + aux), 0);
		  imprimir(arr, 12);

	   }
	   i = arr;
    }
}*/

int main() {
    double x = 0, y = 0, z = 0;
    //double matriz[3][4] = {{ 1,1,1,6 },
    //							{ 2,-1,1,5 },
     //                           {1,1,1,1}};

    double **matriz = new double*[n];
    for (int i = 0; i<n; i++) {
		  *(matriz + i) = new double[m];
    }

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
		  *(*(matriz + i)+j) = 1;}
    }

    imprimir(matriz);
    //gauss(matriz);

    if (*(*matriz + 11) == 0) {
	   cout << "La matriz no tiene solucion" << endl;
	   return 0;
    }

    z = *(*matriz + 11);
    y = *(*matriz + 7) - *(*matriz + 6)* z;
    x = *(*matriz + 3) - (*(*matriz + 1) * y + *(*matriz + 2) * z);

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "Z = " << z << endl;

    delete matriz;
    return 0;
}
