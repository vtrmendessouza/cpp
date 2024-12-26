#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    unsigned long long graos, gramas, kilos;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        graos = 1;
        for (int i = 0; i < x; i++) {
            graos *= 2;
        }
        graos -= 1;
        gramas = graos / 12;
        kilos = gramas / 1000;
        cout << kilos << " kg" << endl;
    }
}
