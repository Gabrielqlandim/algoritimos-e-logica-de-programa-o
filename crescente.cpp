#include <iostream>

using namespace std;

int main(void){
    int a, b;

    while(1){
        cout<<"Digite dois numeros: ";
        cin>>a>>b;
        if(a==b){
            break;
        }
        if(a>b){
            cout<<"Decrescente"<<endl;
        }
        else{
            cout<<"crescente";
        }
    }
    return 0;
}