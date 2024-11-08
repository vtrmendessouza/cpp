#include <bits/stdc++.h>
using namespace std;
int main(){

double volume, diametro, altura, area, pi, raio;
cin >> volume >> diametro;

pi = 3.14;
raio = diametro / 2;
altura = volume / (pi * raio);
area = (2 * pi * (raio * raio)) + (2 * pi * raio * altura);

cout << setprecision(2) << fixed;
cout << "ALTURA = " << altura << endl;
cout << "AREA = " << area << endl;
}
