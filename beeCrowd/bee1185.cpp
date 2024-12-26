#include <bits/stdc++.h>
using namespace std;

int main() {
    char o; // Operação: 'S' ou 'M'
    cin >> o;

    double m[12][12], soma = 0.0;
    int count = 0;

    // Leitura da matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    // Calcular a soma dos elementos acima da diagonal secundária
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12 - 1 - i; j++) { // Apenas colunas acima da diagonal secundária
            soma += m[i][j];
            count++;
        }
    }

    // Imprime o resultado com 1 casa decimal
    if (o == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    } else if (o == 'M') {
        cout << fixed << setprecision(1) << soma / count << endl;
    }

    return 0;
}
