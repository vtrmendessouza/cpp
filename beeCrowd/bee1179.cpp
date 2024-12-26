#include <bits/stdc++.h>
using namespace std;

int main() {
    int v[15];
    vector<int> par(5), impar(5); // Vetores temporários de tamanho fixo 5
    int pCount = 0, iCount = 0;  // Contadores para os vetores

    // Lê os 15 valores
    for (int i = 0; i < 15; i++) {
        cin >> v[i];

        if (v[i] % 2 == 0) {
            par[pCount++] = v[i]; // Adiciona no vetor de pares
            if (pCount == 5) {   // Quando vetor de pares estiver cheio
                for (int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                pCount = 0; // Reinicia o contador
            }
        } else {
            impar[iCount++] = v[i]; // Adiciona no vetor de ímpares
            if (iCount == 5) {      // Quando vetor de ímpares estiver cheio
                for (int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                iCount = 0; // Reinicia o contador
            }
        }
    }

    // Imprime o restante dos ímpares, se houver
    for (int j = 0; j < iCount; j++) {
        cout << "impar[" << j << "] = " << impar[j] << endl;
    }

    // Imprime o restante dos pares, se houver
    for (int j = 0; j < pCount; j++) {
        cout << "par[" << j << "] = " << par[j] << endl;
    }

    return 0;
}
