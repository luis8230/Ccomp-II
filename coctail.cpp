#include <iostream>

using namespace std;

void swap(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void Coctail(int* a, int n){
	int* i,*j,*k;
	for(i=a; i<a+n; n--,i++){
		for(j=i+1; j<a+n; j++){
			
			if(*j < *(j-1)){
				swap(j, j-1);}
		}
		for(k=a+n-1; k>i; k--){
			
			if(*k < *(k-1)){
				swap(k,(k-1));}
		}
	}
}

int main(){
	int n;
	cout<<"Cantidad de elementos: ";
	cin>>n;

	int arr[n],x=0;
	for(int *i = arr; i <arr+n; i++){
		cout<<"Elemento"<<x++<<": ";
		cin>>*i;}
	
	for (int *i = arr; i <arr+n; i++){
		cout<<*i<<"\t";}
		
	Coctail(arr,n);
	cout<<endl;
	
	for (int *i = arr; i <arr+n; i++){
		cout<<*i<<"\t";}

	return 0;
}
