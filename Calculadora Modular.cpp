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

void Invmod(int num, int mod) {

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