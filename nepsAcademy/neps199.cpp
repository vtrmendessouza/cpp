//neps 199 soma das linhas de matriz 3x3
#include <bits/stdc++.h>
using namespace std;
int main(){

int mat[3][3];
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin >> mat[i][j];
    }
}
for(int i=0; i<3; i++){
    int soma = 0;
    for(int j=0; j<3; j++){
        soma += mat[i][j];
    }
    cout << "Linha " << i << ": " << soma << endl;
}
}