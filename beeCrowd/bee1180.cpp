#include <bits/stdc++.h>
using namespace std;
int main(){

int x = 0, menor = 0, posicao = 0;
cin >> x;
int v[x];

for(int i = 0; i < x; i++){
    cin >> v[i];
    if(i == 0){
        menor = v[0];
    }
    else if(i != 0 && v[i] < menor){
        menor = v[i];
        posicao = i;
    }
}
cout << "Menor valor: " << menor << "\n";
cout << "Posicao: " << posicao << "\n";
}