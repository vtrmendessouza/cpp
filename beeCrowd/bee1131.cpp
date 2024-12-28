#include <bits/stdc++.h>
using namespace std;
int main() {

    int golInter = 0, golGremio = 0, opcao = 0, vitoriaInter = 0, 
        vitoriaGremio = 0, empate = 0, grenal = 0;
    
    do{
        opcao = 0;
        grenal ++;
        cin >> golInter >> golGremio;
    
        if(golInter > golGremio){
            vitoriaInter ++;
        }
        else if(golInter < golGremio){
            vitoriaGremio ++;
        }
        else{
            empate ++;
        }
        while (opcao != 1 && opcao != 2){
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> opcao;
        }
    } while (opcao == 1);

    cout << grenal << " grenais" << endl;
    cout << "Inter:" << vitoriaInter << endl;
    cout << "Gremio:" << vitoriaGremio << endl;
    cout << "Empates:" << empate << endl;

    if(vitoriaInter > vitoriaGremio){
        cout << "Inter venceu mais" << endl;
    }    
    else{
        cout << "Gremio venceu mais" << endl;
    }    
    return 0;
}