#include <iostream>
#include <iomanip>

using namespace std;
int swap(int a, int b, int c){
    int menor;
    if(a<=b && a<=c){
        menor = a;
    }
    else if(b<=c && b<=a){
        menor = b;
    }
    else if(c<=b && c<=a){
        menor = c;
    }
    
    return menor;
}

int main(void){
    system("cls");
    int a,b,c;
    cout<<"Digite tres numeros: ";
    cin >> a >> b >> c;

    int menor = swap(a,b,c);
    
    cout<<"O menor numero e: "<< menor;

}