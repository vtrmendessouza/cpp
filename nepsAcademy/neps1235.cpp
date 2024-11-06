#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0;
int x = 0;
string resposta = "nao_pertence";

cin >> n;
int v[n];
for(int i = 0; i < n; i++){
    cin >> v[i];
}
cin >> x;
for(int i = 0; i < n; i++){
    if(v[i] == x){
        resposta = "pertence";
    }
}
cout << resposta;
}