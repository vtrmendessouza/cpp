//40%
#include <bits/stdc++.h>
using namespace std;
int main(){

int v[15];
vector <int> vp;
vector <int> vi;

for(int i = 0; i < 15; i++){
    cin >> v[i];
    if(v[i] % 2 == 0){
        vp.push_back(v[i]);
    }
    else if(v[i] % 2 != 0){
        vi.push_back(v[i]);
    }
}
//divisao dos vetores pares e impares
int quantidadeVp = vp.size() / 5;
if(vp.size() % 5 != 0){
    quantidadeVp += 1;
}
int quantidadeVi = vi.size() / 5;
if(vi.size() % 5 != 0){
    quantidadeVi += 1;
}
//print com 3 vetores pares e 0 vetor impar
if(quantidadeVp == 3 && quantidadeVi == 0){
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 0 && i < 5){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 5 && i > 4 && i < 10){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 10 && i > 9 && i){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
}
//print com 0 vetor par e 3 vetores impares
if(quantidadeVp == 0 && quantidadeVi == 3){
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 0 && i < 5){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 5 && i > 4 && i < 10){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 10 && i > 4 && i < 15){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
}
//print com 3 vetores pares e 1 vetor impar
if(quantidadeVp == 3 && quantidadeVi == 1){
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 0 && i < 5){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 0 && i < 5){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 5 && i > 4 && i < 10){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 10 && i > 9 && i < 15){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
}
//print com 1 vetor par e 3 vetores impares
if(quantidadeVp == 1 && quantidadeVi == 3){
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 0 && i < 5){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 0 && i < 5){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 5 && i > 4 && i < 10){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 10 && i > 4 && i < 15){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
}
//print com 2 vetores pares e 2 vetores impares
if(quantidadeVp == 2 && quantidadeVi == 2){
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 0 && i < 5){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 0 && i < 5){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 5 && i > 4 && i < 10){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 5 && i > 4 && i < 10){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
}
//print com 2 vetores pares e 1 vetor impar
if(quantidadeVp == 2 && quantidadeVi == 1){
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 0 && i < 5){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 0 && i < 5){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 5 && i > 4 && i < 10){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
}
//print com 1 vetor par e 2 vetores impares
if(quantidadeVp == 1 && quantidadeVi == 2){
    for(int i = 0; i < vp.size(); i++){
        if(vp.size() > 0 && i < 5){
            cout << "par[" << i << "] = " << vp[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 0 && i < 5){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
    for(int i = 0; i < vi.size(); i++){
        if(vi.size() > 5 && i > 4 && i < 10){
            cout << "impar[" << i << "] = " << vi[i] << endl;
        }
    }
}
}