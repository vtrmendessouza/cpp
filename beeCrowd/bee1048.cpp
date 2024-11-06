#include <bits/stdc++.h>
using namespace std;
int main(){

double x;
cin >> x;
cout << setprecision(2) << fixed;

if (x >= 0 && x <= 400){
    cout << "Novo salario: " << x * 1.15 << endl;
    cout << "Reajuste ganho: " << (x * 1.15) - x << endl;
    cout << "Em percentual: 15 %" << endl;
}
if (x >= 400.01 && x <= 800){
    cout << "Novo salario: " << x * 1.12 << endl;
    cout << "Reajuste ganho: " << (x * 1.12) - x << endl;
    cout << "Em percentual: 12 %" << endl;
}
if (x >= 800.01 && x <= 1200){
    cout << "Novo salario: " << x * 1.1 << endl;
    cout << "Reajuste ganho: " << (x * 1.1) - x << endl;
    cout << "Em percentual: 10 %" << endl;
}
if (x>= 1200.01 && x <= 2000){
    cout << "Novo salario: " << x * 1.07 << endl;
    cout << "Reajuste ganho: " << (x * 1.07) - x << endl;
    cout << "Em percentual: 7 %" << endl;
}
if (x > 2000){
    cout << "Novo salario: " << x * 1.04 << endl;
    cout << "Reajuste ganho: " << (x * 1.04) - x << endl;
    cout << "Em percentual: 4 %" << endl;
}
}
