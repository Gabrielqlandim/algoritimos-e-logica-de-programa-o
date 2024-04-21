#include <iostream>
#include <string>
#include <iomanip>
#include <climits>

using namespace std;

int main(void){
    int n;
    cout<<"Digite a quantidade de pessoas: ";
    cin>> n;
    int idade[n], contI=0,somaA = 0;
    double altura[n], mediaA, p;
    string nome[n];
    for(int i=0;i<n;i++){
        cout<<"Dados da "<<i+1<<" pessoa: "<<endl;
        cout<<"Nome: ";
        cin.ignore(INT_MAX,'\n');
        getline(cin,nome[i]);
        cout<<"Idade: ";
        cin>>idade[i];
        cout<<"Altura: ";
        cin>>altura[i];
    }
    for(int i=0;i<n;i++){
        somaA +=altura[i];
    }
    for(int i=0;i<n;i++){
        if(idade[i]<16){
            contI++;
            cout<<nome[i]<<" tem menos de 16 anos"<<endl;
        }
    }
    mediaA = (double) somaA/n;
    p = (double)contI/n*100;
    cout<<"A media das altura e: "<<mediaA<<endl;
    cout<<"A porcentagem de pessoas com menos de 16 anos e: "<<p<<"%"<<endl;
    return 0;
    
}