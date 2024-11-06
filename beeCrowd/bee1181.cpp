#include <bits/stdc++.h>
using namespace std;
int main(){

double m[12][12];
int l = 0;
string t = "";
double soma = 0;
double media = 0;

cin >> l;
cin >> t;
for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
        cin >> m[i][j];
    }
}
for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
        if(l == i){
            soma += m[i][j];
        }
    }
}
media = soma / 12;
/*
//teste
cout << l << "\n";
cout << t << "\n";
cout << soma << "\n";
cout << media << "\n";
*/
cout << setprecision(1) << fixed;
if(t == "S"){
    cout << soma << "\n";
}
else if(t == "M"){
    cout << media << "\n";
}
}