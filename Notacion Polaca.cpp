#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    string mensaje;
    cout << "La operacion es:" << endl;
    getline(cin, mensaje);
    int aux = 0, opTotal = 0, aux3 = 0;

    string signos= "+-*/()";
    string nums= "0123456789";
    int numeros[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    string simbolos="                    ";

    for (int i = 0; i < mensaje.length(); i++) {
	   if (mensaje[i] != signos[0] && mensaje[i] != signos[1] && mensaje[i] != signos[2] && mensaje[i] != signos[3]
		  && mensaje[i] != signos[4] && mensaje[i] != signos[5]) {
		  numeros[i] = mensaje[i];
		  numeros[i] -= 48;
		  simbolos[i] = ' '; }

	   else if (mensaje[i] != nums[0] && mensaje[i] != nums[1] && mensaje[i] != nums[2] && mensaje[i] != nums[3] && mensaje[i] != nums[4]
		  && mensaje[i] != nums[5] && mensaje[i] != nums[6] && mensaje[i] != nums[7] && mensaje[i] != nums[8] && mensaje[i] != nums[9]) {
		  simbolos[i] = mensaje[i];
		  numeros[i] = ' ';}
    }

    for (int i = 0; i < mensaje.length(); i++) {
	    if (i == 0) {
		   aux = numeros[i]; continue;}

	   else if ((mensaje[i] - 48) == numeros[i]) {
		  switch (mensaje[i-1]) {
			 case '+': aux = numeros[i-2] + numeros[i]; break;
			 case '-': aux = numeros[i-2] - numeros[i]; break;
			 case '*': aux = numeros[i-2] * numeros[i]; break;
			 case '/': aux = numeros[i-2] / numeros[i]; break; }
		  numeros[i] = aux;
	   }

	   else if (mensaje[i] == simbolos[i]) {
		  continue;
	   }
    }

    cout << "El resultado es: " << numeros[mensaje.length()-1] << endl;

    system("pause");
    return 0;
}
