#include <bits/stdc++.h>
using namespace std;
int main(){

string o;
cin >> o;

int m[12][12];
for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
        cin >> m[i][j];
    }
}
int soma = 0;
for(int i = 0; i < 12; i++){
    soma += m[i][12 - 1 - i];
}
int media = soma / 12;
if(o == "S"){
    cout << soma << endl;
}
else if(o == "M"){
    cout << media << endl;
}
}