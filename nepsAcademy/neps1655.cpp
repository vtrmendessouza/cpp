#include <bits/stdc++.h>
using namespace std;
int main(){

int n, c, s, x, y, z;
cin >> n >> c >> s;
y = 1;
z = 0;
/*
n = quantidade de estacoes
c = quantidade de comandos
s = estacao mais proxima a area devastada
x = comando
y = posicao do robo
z = quantidade de vezes que o robo passou pela estacao mais proxima a area devastada
*/
if(y == s){
    z++;
}
for(int i = 1; i <= c; i++){
    cin >> x;
    y += x;
    if(y == 0){
        y = n;
    }
    if(y == n + 1){
        y = 1;
    }
    if(y == s){
        z++;
    }
}
cout << z << endl;
return 0;
}
