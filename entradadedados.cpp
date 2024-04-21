#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main(void){
    double salario1, salario2;
    string nome1, nome2;
    int idade;
    char sexo;
    
    cout << "O nome da primeira pessoa: ";
    getline(cin,nome1);
    cout << "O salario da primeira pessoa: ";
    cin>> salario1;

    cout << "Nome da segunda pessoa";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Salario da segunda pessoa: ";
    cin >> salario2;

    cout<<"Digite uma idade: ";
    cin >>idade;
    cout<<"Digite um sexo: ";
    cin >> sexo;

    cout<< fixed << setprecision(2);
    cout<< "A primeira pessoa tem um salario de: "<< salario1<< " o seu nome é: "<< nome1 << endl;
    cout << "A segunda pessoa tem um salario de: "<< salario2<<" o seu nome é: "<< nome2 << endl; 
    cout<< "A idade que foi colocada: "<<idade<<endl;
    cout<<"Sexo que foi colocado: "<<sexo<<endl;
}