//neps 1533 vacina a todos
#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0, m = 0;
cin >> n >> m;
int mat[n][m];

for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
        cin >> mat[i][j];
    }
}
int maior = 0;
for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
        if(mat[i][j] > maior){
            maior = mat[i][j];
        }
    }
}
int compra = 0;
for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
        compra += maior - mat[i][j];
    }
}
cout << compra;
}