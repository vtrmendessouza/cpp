#include <bits/stdc++.h>
using namespace std;
int main() {

    int alcool = 0, gasolina = 0, diesel = 0, opcao = 0;
    
    do{
        cin >> opcao;
        if(opcao < 1 || opcao > 4){
            continue;
        }
        if(opcao == 1){
            alcool ++;
        }
        else if(opcao == 2){
            gasolina ++;
        }
        else if(opcao == 3){
            diesel ++;
        }
    }while (opcao != 4);
    cout <<"MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}