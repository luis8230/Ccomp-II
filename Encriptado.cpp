#include <iostream>

using namespace std;

int Invmod(int num, int mod) {
    int q[10];
    int residuo = mod % num, mod_aux = mod, i = 0;
    while (residuo >= 1) {
	   q[i] = (mod_aux - residuo) / num;
	   mod_aux = num;
	   num = residuo;
	   residuo = mod_aux % num;
	   i++;
    }

    int p[] = { 0,0,0,0,0,0,0,0,0,0 }; p[0] = 0; p[1] = 1;

    for (int j = 2; j <= i + 2; j++) {
	   p[j] = p[j - 2] - (p[j - 1] * q[j - 2]);
	   if (p[j] < 0) {
		  p[j] = mod + p[j];
	   }
	   else if (p[j] > mod) {
		  p[j] -= mod;
	   }
    }

    return p[i+1];
}

int main() {
    int cla_public = 0, cla_private = 0,carac=256;

    cout << "Ingrese su clave publica: " << endl; cin >> cla_public;
    cla_private=Invmod(cla_public, carac);
    


    return 0;
}