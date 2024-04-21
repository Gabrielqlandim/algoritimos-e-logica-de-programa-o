#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){

    double altura, base;

    cout<<"Digite a altura do retangulo: ";
    cin>>altura;
    cout<<endl;
    cout<<"Digite a base do retangulo: ";
    cin>>base;

    double area = base * altura;
    double perimetro = 2*(area+altura);
    double diagonal = sqrt((base * base) + (altura*altura));

    cout<<fixed<<setprecision(4);
    cout << "a area do retangulo é: "<< area<<"o perimero é: "<<perimetro<<"a diagonal é: "<< diagonal<< endl;

    return 0;
}