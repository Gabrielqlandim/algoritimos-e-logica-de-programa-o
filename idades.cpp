#include <iostream>
#include <iomanip>
#include <climits>
#include <string>
using namespace std;

int main(void){
    system("cls");
    string nome[2];
    int idade1, idade2;
    double media;

    
    for(int i=0;i<2;i++){
        cout<<"Digite o nome da pessoa "<< i+1<< ": ";
        getline(cin,nome[i]);     
    }

    cout<<"Qual a idade de "<< nome[0]<< ": ";
    cin>>idade1;
    cin.ignore(INT_MAX,'\n');
    cout<<endl;

    cout<<"Qual a idade de "<< nome[1]<< ": ";
    cin>>idade2;
    cin.ignore(INT_MAX,'\n');
    
    cout<<endl;

    media = (double)(idade1+ idade2)/2;
    cout<<"A media das idades é: "<< media<<endl;
    cout<<"O nome da primeira pessoa é: "<<nome[0]<<endl;
    cout<<"O nome da segunda pessoa é: "<<nome[1]<<endl;
    return 0;
}