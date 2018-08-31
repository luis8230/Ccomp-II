#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


int Multmod(int num, int num2, int mod) {
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
    return mult;
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
        return 0;
    }
    else{
        int resto = s1+s2;
        if(resto<0){
            resto= b + resto;}
        return resto;
		}
}


void cifrado(int claveP)
{
    ifstream entrada( "menzaje.txt" );
    ofstream salida("mCifrado.txt");
    string menzaje;
	
	while(!entrada.eof()){
		menzaje+=entrada.get();
	}
	entrada.close();
	
	char encriptado;
    for( int i = 0; i<menzaje.size(); i++)
    {
    	int variable=Multmod(encriptado=menzaje[i],claveP,256);
    	menzaje[i] = variable;
    }

    menzaje = menzaje.substr(0, menzaje.size() - 1 );

    salida << menzaje;
    salida.close();
}


void descifrado(int clavep)
{
    ifstream entrada( "mCifrado.txt" );
    ofstream salida("mDescifrado.txt");
    string menzaje;
	
	while(!entrada.eof()){
		menzaje+=entrada.get();
	}
	entrada.close();
	
	char encriptado;
    for( int i = 0; i<menzaje.size(); i++)
    {
    	int variable=Multmod(encriptado=menzaje[i],clavep,256);
    	menzaje[i] = variable;
    }
	
    menzaje = menzaje.substr(0, menzaje.size() - 1 );

    salida << menzaje;
    salida.close();
}


int main()
{
	int cPublica,cPrivada;
	do{
		cout<<"Clave privada: ";cin>>cPrivada;
		cPublica=invm(cPrivada,256);
	}while(cPublica==0);
	
    cifrado(cPrivada);
    descifrado(cPublica);
	
    return 0;
}
