//neps media de um vetor
#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0;
double soma = 0, media = 0;
cin >> n;
int v[n];

for(int i = 0; i < n; i++){
    cin >> v[i];
    soma += v[i];
}
media = soma / n;
cout << setprecision(2) << fixed;
cout << media;
}