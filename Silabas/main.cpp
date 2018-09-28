#include <iostream>
#include <string>

using namespace std;

char vocales[]="aeiou%";
char consonantes[] = "bcdfghjklmñpqrstvwxyz";

int main() {
    char palabra[30], respuesta[30];
    cout << "Dame la palabra: ";
    cin >> palabra;
    int size = sizeof(palabra) / sizeof(palabra[0]);
    char e[] = "-",*p = palabra, *v = vocales;
    
    for (int i=0; *p != '\0'; p++,i++) {
	   //strcat(respuesta,palabra[i]);
	   for (; *v != '\0'; v++) {
		  if (*p == *v) {
			 //strcat();}
		  }
		  v = vocales; }
    }

    cout <<"Palabra: "<< palabra << endl;
    cout <<"Separacion: "<< respuesta << endl;

    system("pause");
    return 0;
}
