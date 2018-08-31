#include <iostream>
using namespace std;

void Sumamod(int num, int num2, int mod) {
    int suma = num + num2;
    if (suma > mod) {
	   while (suma > mod) {
		  suma -= mod;
	   }
    }
    cout << suma << "mod" << mod << endl;
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
		  resta += mod;
	   }
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
    cout << mult << "mod" << mod << endl;
}

int invm(int a,int b){
    int r;
    int r1 =a, r2=b;
    int s1= 1, s2= 0;
    int s;
    int t1=0, t2=1;
    int t,q;
    while (r2>0){
        q = r1/r2;
        r=r1-(q*r2);
        r1=r2; r2=r;

        s=s1 - (q*s2);
        s1=s2; s2=s;

        t= t1-(q*t2);
        t1=t2; t2=t;
    }
    if(r1!=1){
        cout<<"no tiene inversa modular"<<endl;
    }
    else{
        int resto = s1+s2;
        if(resto<0){
            resto= b + resto;}
        return resto;}
    }

int main() {
    int num_1 = 0, num_2 = 0, mod = 0;
    int opcion = 0;
    cout << "Que operacion deseas realizar? " << endl;
    cout << "1. Sumar." << endl;
    cout << "2. Restar." << endl;
    cout << "3. Multiplicar." << endl;
    cout << "4. Inverso." << endl;
    cout << "Opcion :  ";
    cin >> opcion;
    //system("cls");
    switch (opcion) {
    case 1:
	   cout << "Digite el primer numero: "; cin >> num_1;
	   cout << "Digite el  segundo numero: "; cin >> num_2;
	   cout << "Digite el modulo: "; cin >> mod;
	   cout << "La suma es: ";
	   Sumamod(num_1, num_2, mod);
	   break;
    case 2:
	   cout << "Digite el primer numero: "; cin >> num_1;
	   cout << "Digite el  segundo numero: "; cin >> num_2;
	   cout << "Digite el modulo: "; cin >> mod;
	   cout << "La resta es: ";
	   Restamod(num_1, num_2, mod);
	   break;
    case 3:
	   cout << "Digite el primer numero: "; cin >> num_1;
	   cout << "Digite el  segundo numero: "; cin >> num_2;
	   cout << "Digite el modulo: "; cin >> mod;
	   cout << "La multiplicacion es: ";
	   Multmod(num_1, num_2, mod);
	   break;
    case 4:
	   cout << "Digite un numero: "; cin >> num_1;
	   cout << "Digite el modulo: "; cin >> mod;
	   cout << "El inverso es: " ;
	   cout<<invm(num_1, mod);
    }

    //system("pause");
    return 0;
}
