#include <bits/stdc++.h>
using namespace std;
int main(){

string a, b, c;
cin >> a >> b >> c;

if(a == "vertebrado" && b == "ave" && c == "carnivoro"){
    cout << "aguia" << endl;
}
if(a == "vertebrado" && b == "ave" && c == "onivoro"){
    cout << "pomba" << endl;
}
if(a == "vertebrado" && b == "mamifero" && c == "onivoro"){
    cout << "homem" << endl;
}
if(a == "vertebrado" && b == "mamifero" && c == "herbivoro"){
    cout << "vaca" << endl;
}
if(a == "invertebrado" && b == "inseto" && c == "hematofago"){
    cout << "pulga" << endl;
}
if(a == "invertebrado" && b == "inseto" && c == "herbivoro"){
    cout << "lagarta" << endl;
}
if(a == "invertebrado" && b == "anelideo" && c == "hematofago"){
    cout << "sanguessuga" << endl;
}
if(a == "invertebrado" && b == "anelideo" && c == "onivoro"){
    cout << "minhoca" << endl;
}
}
