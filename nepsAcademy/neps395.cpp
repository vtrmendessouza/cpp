#include <bits/stdc++.h>
using namespace std;
int main(){

int v[10];
int x = 0;
string resposta = "NAO";

for(int i = 0; i < 10; i++){
    cin >> v[i];
}
cin >> x;
for(int i = 0; i < 10; i++){
    if(v[i] == x){
        resposta = "SIM";
    }
}
cout << resposta;
}