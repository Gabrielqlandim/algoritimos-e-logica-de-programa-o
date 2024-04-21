#include <iostream>

using namespace std;

int main(void){
    int e, contN=0;
    cout<<"Ordem da matriz: "<<endl;
    cin>>e;
    int mat[e][e];
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
        cout<<"Digite os valores para a matriz: "<< endl;
        cin>>mat[i][j];
        }      
    }
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            if(i==j){
            cout<<"Diagonal Principal: "<<mat[i][j]<<endl;
            }
            if(mat[i][j]<0){
                contN++;
            }
        }      
    }
    cout<<"A quantidade de negativos e: "<<contN<<endl;
    return 0;

}