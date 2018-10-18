#include <iostream>

using namespace std;

void imprimir(int arr[3][4]) {
    for (int i = 0; i < 3;i++) {
	   for (int j = 0; j < 4; j++) {
		  cout << arr[i][j] << "  ";}
	   cout << endl;}
    cout << endl << endl;
}

void operar_fila(int arr[3][4],int a,int x,int b,int y) {
    x -= 1; y -= 1;
    for (int j = 0; j < 4; j++) {
		  arr[x][j] = (a* arr[x][j]) + (b* arr[y][j]);
    }
    imprimir(arr);
}

int main() {
    int matriz[3][4] = { {1,1,1,6},
						    {2,-1,1,5},
						    {3,1,-2,9} };
    imprimir(matriz);
    operar_fila(matriz, 1, 2, -2, 1);
    operar_fila(matriz, 1, 3, -3, 1);

    system("pause");
    return 0;
}