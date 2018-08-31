#include <iostream>
#include <string>

using namespace std;

int invm(int a, int b) {
    int r;
    int r1 = a, r2 = b;
    int s1 = 1, s2 = 0;
    int s;
    int t1 = 0, t2 = 1;
    int t, q;
    while (r2>0) {
	   q = r1 / r2;
	   r = r1 - (q*r2);
	   r1 = r2; r2 = r;

	   s = s1 - (q*s2);
	   s1 = s2; s2 = s;

	   t = t1 - (q*t2);
	   t1 = t2; t2 = t;
    }
    if (r1 != 1) {
	   return 0;
    }
    else {
	   int resto = s1 + s2;
	   if (resto<0) {
		  resto = b + resto;
	   }
	   return resto;
    }
}

void Encriptado(string mensaje,int clave,int mens_encrip[]) {
    int carac = 256;
    for (int i = 0; i<mensaje.length(); i++) {
	   cout << mensaje[i] + 0 << endl;
	   if (invm(mensaje[i], carac) == 0) {
		  cout << "Palabra invalida,digite otra" << endl;}
		  //Encriptado();}
	   mens_encrip[i] = mensaje[i] * clave;
	   mens_encrip[i] %= 256;
    }

    for (int i = 0; i < mensaje.length(); i++) {
	   cout <<"encrip:"<< mens_encrip[i] << endl;
    }
}

void Desencriptado(string mensaje, int clave, int mens_encrip[]) {
    int carac = 256; int clave_public = invm(clave, carac);
    for (int i = 0; i < mensaje.length(); i++) {
	   mens_encrip[i] *= clave_public;
	   mens_encrip[i] %= 256;
    }
    for (int i = 0; i < mensaje.length(); i++) {
	   cout << "Desencrip:" << mens_encrip[i] << endl;
    }
}

int main() {
    int carac = 256;
    string mensaje;  int mens_encrip[10];
    int clave_pri = 0;
    cout << "Dame una clave o te asalto csmre >:v : " << endl;
    cin >> clave_pri;
    if (invm(clave_pri, carac) == 0) {
	   cout << "Clave sin inversa, digite otra" << endl;
	   main();
    }
    cout << "Palabra: " << endl; cin >> mensaje;

    Encriptado(mensaje, clave_pri,mens_encrip);
    Desencriptado(mensaje, clave_pri, mens_encrip);

    system("pause");
    return 0;
}
