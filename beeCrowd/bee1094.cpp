#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int total = 0, coelhos = 0, ratos = 0, sapos = 0;

    for (int i = 0; i < N; i++) {
        int quantia;
        char tipo;
        cin >> quantia >> tipo;
        total += quantia;

        if (tipo == 'C') {
            coelhos += quantia;
        } else if (tipo == 'R') {
            ratos += quantia;
        } else if (tipo == 'S') {
            sapos += quantia;
        }
    }
    double percentCoelhos = (coelhos * 100.0) / total;
    double percentRatos = (ratos * 100.0) / total;
    double percentSapos = (sapos * 100.0) / total;

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentCoelhos << " %" << endl;
    cout << "Percentual de ratos: " << percentRatos << " %" << endl;
    cout << "Percentual de sapos: " << percentSapos << " %" << endl;
    return 0;
}