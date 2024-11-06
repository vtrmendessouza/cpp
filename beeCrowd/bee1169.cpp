#include <bits/stdc++.h>
using namespace std;
int main(){

unsigned long long int n = 0, x = 0, fator = 0;

cin >> n;
for(int i = 0; i < n; i++){
    cin >> x;
    fator = 1;
    for(int j = 0; j < x; j++){
        fator += fator;
    }
    cout << fator / 12000 << " kg\n";
}
}