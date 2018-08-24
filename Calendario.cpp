#include <iostream>

using namespace std;

void calendario(int mes, int anho) {
    int cantDias[] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, z = 0, dia_inicio = 1,mod_mes=0;
    if ((anho % 4 == 0 && anho % 100 != 0) || (anho % 4 == 0 && anho % 400 == 0)) {
	   cantDias[1]++;
    }

    cout << "D\tL\tM\tM\tJ\tV\tS" << endl;

    int arr_mes[] = { 0,3,3,6,1,4,6,2,5,0,3,5};

    for (int i = 1; i <= 12; i++) {
	   if (mes == i) {
		  mod_mes = arr_mes[mes - 1];
	   }
    }

    int dia_actual = ((anho - 1) %7 + ((anho - 1) / 4 - 3 * ((anho - 1) / 100 + 1) / 4) % 7 + mod_mes + dia_inicio % 7) % 7;

	for (int i = 0;i < dia_actual; i++) {
	    cout << " \t";
	    z++;
    }

    for (int dia = 1; dia <= cantDias[mes - 1]; dia++) {
	   cout << dia << "\t";
	   z++;
	   if (z % 7 == 0)
		  cout << endl;
    }

}

int main() {
    int mes, anho;
    cout << "Digite el mes: " << endl;
    cin >> mes;
    cout << "Digite el anho: " << endl;
    cin >> anho;

    calendario(mes, anho);
    system("pause");
    return 0;
}