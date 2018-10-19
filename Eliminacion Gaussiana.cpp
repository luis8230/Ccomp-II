#include <iostream>
#include <stdlib.h>
using namespace std;
	
void pDatos(int Dim,double Sist[][4])
	{
	    int A,B;
	
	    cout<<"introduce los elementos de la matriz	:"<<endl;
	    
	    for(A=0;A<Dim;A++) 
			for(B=0;B<Dim;B++){
	        	cout<<"elemento ["<<A<<"]["<<B<<"]: ";cin>>Sist[A][B];
		}
		cout<<"respuestas:"<<endl;	
	    for(A=0;A<Dim;A++){
	    	cout<<"respuesta ["<<A<<"]: ";cin>>Sist[A][Dim];
	    }
	}
	
void iDatos(int Dim, double Sist[][4])
	{
	    int A,B;
	    for(A=0;A<Dim;A++){
	        for(B=0;B<(Dim+1);B++){
	            cout<<Sist[A][B]<<" ";
	            if(B==Dim-1) 
					cout<<" = ";
			}
	        cout<<endl;
	    }
	}
	
void Gauss(int Dim, double Sist[][4])
	{
	    int NoCero,Col,C1,C2,A;
	    double Pivote,V1;
	    
	    for(Col=0;Col<Dim;Col++){
	        NoCero=0;A=Col;
	        while(NoCero==0){
	            if(Sist[A][Col]!=0){
	                NoCero=1;}
	            else A++;
			}
	        Pivote=Sist[A][Col];
	        for(C1=0;C1<(Dim+1);C1++){
	            V1=Sist[A][C1];
	            Sist[A][C1]=Sist[Col][C1];
	            Sist[Col][C1]=V1/Pivote;}
	        for(C2=Col+1;C2<Dim;C2++){
	            V1=Sist[C2][Col];
	            for(C1=Col;C1<(Dim+1);C1++){
	                Sist[C2][C1]=Sist[C2][C1]-V1*Sist[Col][C1];}
		  		  }
			}
	    
	    for(Col=Dim-1;Col=0;Col--) 
			for(C1=(Col-1);C1>=1;C1--){
	        	Sist[C1][Dim]=Sist[C1][Dim]-Sist[C1][Col]*Sist[Col][Dim];
	        	Sist[C1][Col]=0;
	    }
	}
int main()
{
    int C;
    
    int Dimension=3;
    double Sistema[3][4];
    
    pDatos(Dimension,Sistema);
    system("cls");
	cout<<"la matriz ingresada es :"<<endl;
	iDatos(Dimension,Sistema);
    Gauss(Dimension,Sistema);
    cout<<endl;
    iDatos(Dimension,Sistema);
    cout<<endl;
   	cout<<"las soluciones son: "<<endl;
    	
	double x1=1,x2=1,x3=1;
	x3=Sistema[2][3];
	x2=Sistema[1][3]-Sistema[1][2]*x3;
    x1=Sistema[0][3]-(Sistema[0][1]*x2 + Sistema[0][2]*x3);
    
	cout<<"x1 = "<<x1<<endl;
	cout<<"x2 = "<<x2<<endl;
	cout<<"x3 = "<<x3<<endl;
    return 0;
    
}

