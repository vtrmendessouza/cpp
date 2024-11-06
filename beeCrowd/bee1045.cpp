#include <bits/stdc++.h>
using namespace std;
int main(){

double x, y, z, a, b, c;
cin >> x >> y >> z;

if(x >= y && y >= z){
    a = x, b = y, c = z;
}
if(x >= z && z >= y){
    a = x, b = z, c = y;
}
if(y >= x && x >= z){
    a = y, b = x, c = z;
}
if(y >= z && z >= x){
    a = y, b = z, c = x;
}
if(z >= x && x >= y){
    a = z, b = x, c = y;
}
if(z >= y && y >= x){
    a = z, b = y, c = x;
}
if(x == y && y == z){
    a = x, b = y, c = z;
}
    if(a >= b + c){
    cout << "NAO FORMA TRIANGULO" << endl;
}
else{
    if(pow(a,2) == pow(b,2) + pow(c,2)){
    cout << "TRIANGULO RETANGULO" << endl;
}
    if(pow(a,2) > pow(b,2) + pow(c,2)){
    cout << "TRIANGULO OBTUSANGULO" << endl;
}
    if(pow(a,2) < pow(b,2) + pow(c,2)){
    cout << "TRIANGULO ACUTANGULO" << endl;
}
    if(a == b && a == c){
    cout << "TRIANGULO EQUILATERO" << endl;
}
    if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
    cout << "TRIANGULO ISOSCELES" << endl;
}
}
}
