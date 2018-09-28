#include "array.h"
char abecedario[]={"bcdfghjklmnpqrstvwxyz"};
char vocales[]={"aeiou"};
array::array(int size){
	this->size=size;
	data=new char[size];
	
}


void array::imp(){
	for(;*data!='\0';data++){
		cout<<*data;
	}
}

void array::sila(char *a){
	char *abc=abecedario;
	char *voc=vocales;
	
	for(int i=0;*a!='\0';a++,i++){
		data[i]=*a;
		for (; *voc != '\0'; voc++) {
			if(*a=='i' && *(a+1)=='a'){
				continue;
			}
			if(*a=='a' && *(a+1)=='u'){
				continue;
			}
			if(*a=='i' && *(a+1)=='o'){
				continue;
			}
			if(*a=='i' && *(a+1)=='a'){
				continue;
			}
			if(*a=='u' && *(a+1)=='a'){
				continue;
			}
			if(*a=='u' && *(a+1)=='e'){
				continue;
			}
			if(*a=='u' && *(a+1)=='i'){
				continue;
			}
		
			
		  	if (*a == *voc) {
		  	
			i++;
			this->size=size+1;
			data[i]='-';
			}
				
		}
		voc-=5;
		
	}

	
}
