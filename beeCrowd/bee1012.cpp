#include <bits/stdc++.h>
using namespace std;
int main(){

double a, b, c;
cin >> a >> b >> c;
cout << setprecision(3) << fixed;
cout << "TRIANGULO: " << a * c / 2 << endl;
cout << "CIRCULO: " << pow(c, 2) * 3.14159 << endl;
cout << "TRAPEZIO: " << (a + b) * c / 2 << endl;
cout << "QUADRADO: " << b * b << endl;
cout << "RETANGULO: " << a * b << endl;
}
