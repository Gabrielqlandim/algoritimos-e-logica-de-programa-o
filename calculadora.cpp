#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void){
    char e;
    int r, b, q, contn = 0;
    
    cout << "Digite a operação que você gostaria de fazer: ";
    cin >> e;
    cin.ignore();
    
    cout << "Qual a quantidade de números que você quer ter na expressão?: ";
    cin >> q;
    cin.ignore();
    
    while(q < 2){
        cout << "Digite novamente a quantidade de números que você quer ter na expressão: ";
        cin >> q;
        cin.ignore();
        
        if(q < 2){
            cout << "Precisa ter mais de dois números\n";
            contn++;
        }
        
        if(contn > 1){
            cout << "Macho, pqp, eu já disse que era pra você digitar mais de dois números, faz a coisa certa seu imbecil\n";
        }
        
        if(q >= 2){
            cout << "Parabéns!!!\n";
            break;
        }
    }

    cout << "Digite o primeiro número: ";
    cin >> r;
    
    for(int i = 1; i < q; i++){
        cout << "Digite outro número: ";
        cin >> b;
        
        switch(e){
            case 's':
                r += b;
                break;

            case 'b':
                if(r > b){
                    r -= b;
                }
                else{
                    r = b - r;
                }
                break;

            case 'm':
                r *= b;
                break;

            case 'd':
                if(r == 0 || b == 0){
                    cout << "Divisão por zero não pode" << endl;
                }
                else{
                    r /= b;
                }
                break;

            default:
                cout << "Operação inválida!!";             
        }
    }

    cout << "Resultado: " << r << endl;
    return 0;
}