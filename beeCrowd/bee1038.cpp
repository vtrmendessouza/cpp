#include <bits/stdc++.h>
using namespace std;
int main(){

double codigo, quantidade, valor;
cin >> codigo >> quantidade;
if (codigo == 1){
    valor = 4;
}
if (codigo == 2){
    valor = 4.5;
}
if (codigo == 3){
    valor = 5;
}
if (codigo == 4){
    valor = 2;
}
if (codigo == 5){
    valor = 1.5;
}
cout << setprecision(2) << fixed;
cout << "Total: R$ " << valor * quantidade << endl;
}
