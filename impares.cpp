#include <iostream>

using namespace std;

int main(void){
    int a,b,troca, impar=0;

    cout<<"Digite dois numeros: ";
    cin>>a>>b;

    if(a>b){
        troca =a;
        a=b;
        b=troca;
    }
    for(int i= a+1;i<b;i++){
        if(i%2!=0){
            impar+=i;
        }
    }
    cout<<"A soma dos impares e: "<<impar;
    return 0;
}