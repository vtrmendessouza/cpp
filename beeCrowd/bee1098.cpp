#include <iostream>
using namespace std;
int main() {
    // Laço para gerar os valores de I de 0 até 2 com incremento de 0.2
    for (double i = 0.0; i <= 2.0; i += 0.2) {
        // Laço para gerar os valores de J de 1 até 3
        for (int j = 1; j <= 3; j++) {
            // Imprime I e J com o valor de I com 1 casa decimal e J como inteiro
            cout << "I=" << i << " J=" << i + j << endl;
        }
    }
}