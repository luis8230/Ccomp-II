#include <iostream>
#include <string>

using namespace std;

string vocales="aeiou%";
string consonantes = "bcdfghjklmñpqrstvwxyz";

int main() {
    string palabra, respuesta;
    string e = "-",f;
    string *p = &palabra, *v = &vocales;
    cout << "Dame la palabra: ";
    getline(cin, palabra);
    f += palabra[palabra.length() - 1];
    
    for (;*p!=f;p++) {
	   respuesta += *p;
	   for (;*v!="%"; v++) {
		  if (*p == *v) {
			 respuesta += e;}}
	   v = &vocales;
    }

    cout <<"Palabra: "<< palabra << endl;
    cout <<"Separación: "<< respuesta << endl;

    system("pause");
    return 0;
}