#include <iostream>

using namespace std;

void Sumamod(int num,int num2,int mod) {
    int suma = num + num2;
    if (suma > mod) {
	   while (suma > mod) {
		  suma -= mod;}
    }
    if (suma == mod) {
	   cout << "0" << endl; }
    cout<<suma<<"mod"<<mod<<endl;
}

void Restamod(int num, int num2, int mod) {
    int resta = num - num2;
    if (resta > mod) {
	   while (resta > mod) {
		  resta -= mod;
	   }
    }
    if (resta <0) {
	   while (resta <0) {
		  resta+=mod ;
	   }
    }
    if (resta == mod) {
	   cout << "0" << endl;
    }
    cout << resta << "mod" << mod << endl;
}

void Multmod(int num, int num2, int mod) {
    int mult = num * num2;
    if (mult > mod) {
	   while (mult > mod) {
		  mult -= mod;
	   }
    }
    if (mult <0) {
	   while (mult <0) {
		  mult += mod;
	   }
    }
    if (mult == mod) {
	   cout << "0" << endl;
    }
    cout << mult << "mod" << mod << endl;
}

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
    }

    cout << p[i + 1] << "mod" << mod << endl;
    return 0;
}

int main() {
    int num_1 = 0, num_2 = 0, mod = 0;
    cout << "Digite el primer numero: " << endl; cin >> num_1;
    cout << "Digite el  segundo numero: " << endl; cin >> num_2;
    cout << "Digite el modulo: " << endl; cin >> mod;
    
    Sumamod(num_1, num_2, mod);
    Restamod(num_1, num_2, mod);
    Multmod(num_1, num_2, mod);
    Invmod(num_1, mod);

    return 0;
}
