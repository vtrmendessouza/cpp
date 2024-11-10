#include <bits/stdc++.h>
using namespace std;
int main(){

double dinheiro = 0, preco = 0, troco = 0; 
int quantidade = 0;
cin >> dinheiro >> preco;

quantidade = dinheiro / preco;
troco = dinheiro - (quantidade * preco);
cout << quantidade << " " << troco << endl;

}