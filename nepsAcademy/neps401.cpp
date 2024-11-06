#include <bits/stdc++.h>
using namespace std;
int main(){

int vetorEntrada[10];
vector <int> vetorSubstituicao, vetorOcorrencia;
int menor = 100;

for(int i = 0; i < 10; i++){
    cin >> vetorEntrada[i];
    if(menor > vetorEntrada[i]){
        menor = vetorEntrada[i];
    }
}
for(int i = 0; i < 10; i++){
    if(vetorEntrada[i] == menor){
        vetorOcorrencia.push_back(i);
    }
}
for(int i = 0; i < 10; i++){
    if(vetorEntrada[i] == menor){
        vetorSubstituicao.push_back(-1);
    }
    else{
        vetorSubstituicao.push_back(vetorEntrada[i]);
    }
}

cout << "Menor: "<< menor << "\n";
cout << "Ocorrencias: ";
for(int i = 0; i < vetorOcorrencia.size(); i++){
    cout << vetorOcorrencia[i] << " ";
}
cout << "\n";
for(int i = 0; i < vetorSubstituicao.size(); i++){
    cout << vetorSubstituicao[i] << " ";
}
}