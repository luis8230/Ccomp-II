#include <iostream>

using namespace std;



void vuelto(double &x){
	long positivo;	
	double decimal;
	double aux=0;
	positivo = long(x);
	decimal = (((positivo-x)*100)*(-1));
	
	//variables
	int billetes_200 = 0; 
    int billetes_100 = 0; 
    int billetes_50 = 0; 
    int billetes_20 = 0; 
    int billetes_10 = 0; 
    int monedas_5 = 0; 
    int monedas_2 = 0; 
    int monedas_1 = 0; 
    int centimos_50 = 0; 
	int centimos_20 = 0;
	int centimos_10 = 0;
	
	//billetes
	for (positivo; positivo >= 200 ;) 
    { 
        billetes_200 += 1; 
        positivo -= 200; 
    } 
    if ((positivo < 200) && (positivo >= 100)) 
    { 
        billetes_100 += 1; 
        positivo -= 100; 
    } 
    if((positivo < 100) && (positivo >= 50)) 
    { 
        billetes_50 += 1; 
        positivo -= 50; 
    } 
    for(positivo;(positivo < 50) && (positivo >= 20);) 
    { 
        billetes_20 += 1; 
        positivo -= 20; 
    } 
    if((positivo < 20) && (positivo >= 10)) 
    { 
        billetes_10 += 1; 
        positivo -= 10; 
    } 
    
    //monedas
    if ((positivo < 10) && (positivo >= 5)) 
    { 
        monedas_5 += 1; 
        positivo -= 5; 
    } 
    for (positivo;(positivo < 5) && (positivo >= 2);) 
    { 
        monedas_2 += 1; 
        positivo -= 2; 
    } 
    if ((positivo < 2) && (positivo >=1)) 
    { 
        monedas_1 += 1; 
        positivo -= 1; 
    } 
    
    //centimos
    if((decimal < 100 ) && (decimal>=50))
    {
    	centimos_50 +=1;
    	decimal -=50;
	}
	for(decimal;(decimal < 50) && (decimal>=20);)
    {
    	centimos_20 +=1;
    	decimal -=20;
	}
	if((decimal < 20) && (decimal>=10))
    {
    	centimos_10 +=1;
    	decimal -=10;
	}



	//imprimir
	if(billetes_200!=0){
		cout<<billetes_200<<" de S./200.00"<<endl;
	}
	
	if(billetes_100!=0){
		cout<<billetes_100<<" de S./100.00"<<endl;
	}
	
	if(billetes_50!=0){
		cout<<billetes_50<<" de S./50.00"<<endl;
	}
	
	if(billetes_20!=0){
		cout<<billetes_20<<" de S./20.00"<<endl;
	}
	
	if(billetes_10!=0){
		cout<<billetes_10<<" de S./10.00"<<endl;
	}
	
	if(monedas_5!=0){
		cout<<monedas_5<<" de S./5.00"<<endl;
	}
	
	if(monedas_2!=0){
		cout<<monedas_2<<" de S./2.00"<<endl;
	}
	
	if(monedas_1!=0){
		cout<<monedas_1<<" de S./1.00"<<endl;
	}
	if(centimos_50!=0){
		cout<<centimos_50<<" de S./0.50"<<endl;
	}
	if(centimos_20!=0){
		cout<<centimos_20<<" de S./0.20"<<endl;
	}
	if(centimos_10!=0){
		cout<<centimos_10<<" de S./0.10"<<endl;
	}



}

int main(){
	
	double *x,y=0;
	cout<<"Dame un numero: ";cin>>y;
	x=&y;
	
	vuelto(*x);
	
}
