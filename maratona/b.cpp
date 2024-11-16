#include <bits/stdc++.h>
using namespace std;
int main(){

int q = 0, d = 0, t = 0;
int contador = 0, soma = 0, tamanho = 0;

cin >> q;
for(int i = 0; i < q; i++){
    cin >> d;
    contador = 4;
    soma = 0;
    tamanho = 10;
    
    for(int j = 0; j < d; j++){
        soma += contador;
        contador --;
        if(contador < 1){
            contador = 1;
        }
    }
    for(int j = 0; j < soma; j++){
        if(tamanho <= 1){
            t ++;
        }
        tamanho --;
    }    
}
cout << t << endl;
}