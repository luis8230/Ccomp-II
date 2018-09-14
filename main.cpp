#include <iostream>

using namespace std;

void CocktailSort(int a[]){
    bool flag=true;
    int*p = a;
    int*q = p+7;
    while(flag){
        flag=false;
        for (;p<q;p++){
            if (*p<*q){
                swap();
                flag= true;}
        }

    }

}

int main(){
    int arr[] = {5,1,4,2,8,0,2};
    CocktailSort(arr);


    return 0;
}
