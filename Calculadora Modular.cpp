#include <iostream>
#include <stdlib.h>
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
    int opcion=0;
    cout<<"Que operacion deseas realizar? "<<endl;
	cout<<"1. Sumar."<<endl;
	cout<<"2. Restar."<<endl;
	cout<<"3. Multiplicar."<<endl;
	cout<<"4. Inverso."<<endl;
	cout<<"Opcion :  ";
	cin>>opcion;
	system("cls");
	switch(opcion){
		case 1:
				cout << "Digite el primer numero: " ; cin >> num_1;
    			cout << "Digite el  segundo numero: " ; cin >> num_2;
    			cout << "Digite el modulo: " ; cin >> mod;
    			cout<<"La suma es: ";
				Sumamod(num_1, num_2, mod);
    			break;
		case 2:
				cout << "Digite el primer numero: " ; cin >> num_1;
    			cout << "Digite el  segundo numero: " ; cin >> num_2;
    			cout << "Digite el modulo: " ; cin >> mod;
    			cout<<"La resta es: ";
				Restamod(num_1, num_2, mod);	
				break;
		case 3:
				cout << "Digite el primer numero: " ; cin >> num_1;
    			cout << "Digite el  segundo numero: " ; cin >> num_2;
    			cout << "Digite el modulo: " ; cin >> mod;
    			cout<<"La multiplicacion es: ";
				Multmod(num_1, num_2, mod);	
				break;				
		case 4:
				cout << "Digite un numero: " ; cin >> num_1;
				cout << "Digite el modulo: " ; cin >> mod;
				cout<<"El inverso es: ";
				Invmod(num_1, mod);
	}
	
    
    //Sumamod(num_1, num_2, mod);
    //Restamod(num_1, num_2, mod);
    //Multmod(num_1, num_2, mod);
    //Invmod(num_1, mod);

    return 0;
}
