#include <iostream>

using namespace std;

void imprimir(double arr[3][4]) {
    for (int i = 0; i < 3;i++) {
	   for (int j = 0; j < 4; j++) {
		  cout << arr[i][j] << "  ";}
	   cout << endl;}
    cout << endl << endl;
}

void operar_fila(double arr[3][4],int a,int x,double b,int y) {	    //matriz, coeficiente fila en la que se resta, fila en la que se resta, coeficiente fila que se resta, fila que se resta										
    for (int j = 0; j < 4; j++) {
		  arr[x][j] = (a* arr[x][j]) - (b* arr[y][j]);                   
    }
}

void to_one(double arr[3][4],int i) {
    if(arr[i][i]==0){
	   arr[i][i] = arr[i][i];
    }
    else {
	   double aux;
	   aux = 1 / arr[i][i];
	   for (int x = 0; x < 4; x++)
		  arr[i][x] *= aux; }
}

void gauss(double arr[3][4]) {
    for (int i = 0; i < 3; i++) {
	   for (int j=i; j < 3; j++) {
		  if (i == j && arr[i][i] != 1) {
			 to_one(arr, i);
			 cout << "J : " << j << "\t" << "I: " << i << endl;
			 imprimir(arr);

			 continue;
		  }
		  else if ((i == j && arr[i][i] == 1) || arr[j][i] == 0) {
			 cout << "J : " << j << "\t" << "I: " << i << endl;
			 imprimir(arr);

			 continue;
		  }

		  operar_fila(arr, 1, j , arr[j][i], i);
		  cout << "J : " << j <<"\t"<<"I: "<<i<<endl;
		  imprimir(arr);
	   }
    }
}

int main() {
    double x = 0, y = 0, z = 0;
    double matriz[3][4] = { {2,-1,3,5},
						    {2,2,3,7},
						    {-2,3,0,-3} };
    imprimir(matriz);
    gauss(matriz);
    imprimir(matriz);

    if (matriz[2][2] == 0) {
	   cout << "La matriz no tiene solucion" << endl;
	   return 0;
    }
        
    z = matriz[2][3];
    y = matriz[1][3] - matriz[1][2] * z;
    x = matriz[0][3] - (matriz[0][1] * y + matriz[0][2] * z);

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "Z = " << z << endl;

    return 0;
}



