#include <bits/stdc++.h>
using namespace std;
int main(){

double valor;
int inteiro, resto;
cin >> valor;
inteiro = valor * 100;
cout << "NOTAS:" << endl;
cout << inteiro / 10000 << " nota(s) de R$ 100.00" << endl;
    resto = inteiro % 10000;
cout << resto / 5000 << " nota(s) de R$ 50.00" << endl;
    resto = resto % 5000;
cout << resto / 2000 << " nota(s) de R$ 20.00" << endl;
    resto = resto % 2000;
cout << resto / 1000 << " nota(s) de R$ 10.00" << endl;
    resto = resto % 1000;
cout << resto / 500 << " nota(s) de R$ 5.00" << endl;
    resto = resto % 500;
cout << resto / 200 << " nota(s) de R$ 2.00" << endl;
    resto = resto % 200;
cout << "MOEDAS:" << endl;
cout << resto / 100 << " moeda(s) de R$ 1.00" << endl;
    resto = resto % 100;
cout << resto / 50 << " moeda(s) de R$ 0.50" << endl;
    resto = resto % 50;
cout << resto / 25 << " moeda(s) de R$ 0.25" << endl;
    resto = resto % 25;
cout << resto / 10 << " moeda(s) de R$ 0.10" << endl;
    resto = resto % 10;
cout << resto / 5 << " moeda(s) de R$ 0.05" << endl;
    resto = resto % 5;
cout << resto / 1 << " moeda(s) de R$ 0.01" << endl;
}
