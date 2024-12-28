#include <bits/stdc++.h>
using namespace std;
int main() {
    string diaInicio, diaFim;
    int dia1, dia2, h1, m1, s1, h2, m2, s2;

    cin >> diaInicio >> dia1;
    if (diaInicio != "Dia" || dia1 < 1 || dia1 > 31) {
        cerr << "Erro: Entrada de dia inválida." << endl;
        return 1;
    }
    cin >> h1; cin.ignore();
    cin >> m1; cin.ignore();
    cin >> s1;

    if (h1 < 0 || h1 > 23 || m1 < 0 || m1 > 59 || s1 < 0 || s1 > 59) {
        cerr << "Erro: Horário inicial inválido." << endl;
        return 1;
    }
    cin >> diaFim >> dia2;
    if (diaFim != "Dia" || dia2 < dia1 || dia2 > 31) {
        cerr << "Erro: Entrada de dia inválida." << endl;
        return 1;
    }
    cin >> h2; cin.ignore();
    cin >> m2; cin.ignore();
    cin >> s2;

    if (h2 < 0 || h2 > 23 || m2 < 0 || m2 > 59 || s2 < 0 || s2 > 59) {
        cerr << "Erro: Horário final inválido." << endl;
        return 1;
    }
    int inicioSegundos = (dia1 * 86400) + (h1 * 3600) + (m1 * 60) + s1;
    int fimSegundos = (dia2 * 86400) + (h2 * 3600) + (m2 * 60) + s2;

    if (fimSegundos < inicioSegundos) {
        cerr << "Erro: Horário final menor que o inicial." << endl;
        return 1;
    }

    int duracaoSegundos = fimSegundos - inicioSegundos;
    int dias = duracaoSegundos / 86400;
    duracaoSegundos %= 86400;
    int horas = duracaoSegundos / 3600;
    duracaoSegundos %= 3600;
    int minutos = duracaoSegundos / 60;
    int segundos = duracaoSegundos % 60;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;
    return 0;
}