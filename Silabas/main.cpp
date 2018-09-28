#include <iostream>
#include <string.h>

using namespace std;

char vocales[]="aeiou%";
char consonantes[] = "bcdfghjklmñpqrstvwxyz";

int main() {
    char palabra[30];char respuesta[30];
    cout << "Dame la palabra: ";
    cin >> palabra;
    int size = sizeof(palabra) / sizeof(palabra[0]);
    const char e[] = "-";char  *p = palabra, *v = vocales;
    
    for (int i=0; *p != '\0'; p++,i++) {
	   strncat(respuesta,palabra,1);
	   for (; *v != '\0'; v++) {
		  if (*p == *v) {
			 strcat(respuesta,e);
		  }
		  v = vocales; }
    }

    cout <<"Palabra: "<< palabra << endl;
    cout <<"Separacion: "<< respuesta << endl;

    return 0;
}
