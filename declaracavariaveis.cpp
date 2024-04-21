#include <iostream>
#include <iomanip>
#include   <string>

using namespace std;

int main(void){
    int idade;
    string nome;
    char genero;
    double salario, altura;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << endl;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << endl;
    cout << "Digite seu genero: ";
    cin>> genero;
    cout << endl;
    cout << "Digite seu salario: ";
    cin >> salario;
    cout << endl;
    cout <<" Digite sua altura: ";
    cin>> altura;

    cout << fixed << setprecision(2);
    cout << "Sua idade é: " << idade<< endl;
    cout << "Seu nome é: " << nome<< endl;
    cout << "Seu salario é: " << salario<<endl;
    cout << "seu genero é: "<< genero<< endl;
    cout << "sua altura é: "<< altura<<endl;

    return 0;
}