#include <bits/stdc++.h>
using namespace std;
int main(){

    string cor;
    cin >> cor;

    if(cor == "amarela" || cor == "vermelha" || cor =="azul"){
        cout << "primaria" << endl;
    }
    else if(cor == "laranja" || cor == "verde" || cor == "roxa"){
        cout << "secundaria" << endl;
    }
    else{
        cout << "outra" << endl;
    }
}