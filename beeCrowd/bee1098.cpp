#include <iostream>
using namespace std;
int main() {
    // Laço para gerar os valores de I de 0 até 2 com incremento de 0.2
    for (double I = 0.0; I <= 2.0; I += 0.2) {
        // Laço para gerar os valores de J de 1 até 3
        for (int J = 1; J <= 3; J++) {
            // Imprime I e J com o valor de I com 1 casa decimal e J como inteiro
            cout << "I=" << I << " J=" << I + J << endl;
        }
    }
}