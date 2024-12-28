#include <bits/stdc++.h>
using namespace std;
int main() {

    float n1 = -1, n2 = -1, x = 0;
    do{
        n1 = -1, n2 = -1, x = 0;
        while (n1 < 0 || n1 > 10){
            cin >> n1;
            if(n1 < 0 || n1 > 10){
                cout << "nota invalida" << endl;
            }
        }
        while (n2 < 0 || n2 > 10){
            cin >> n2;
            if(n2 < 0 || n2 > 10){
                cout << "nota invalida" << endl;
            }
        }
        cout << setprecision(2) << fixed;
        cout << "media = " << (n1 + n2) / 2 << endl;
        while (x != 1 && x != 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
        }
    }
    while (x == 1);
    return 0;
}