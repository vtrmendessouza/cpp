#include <bits/stdc++.h>
using namespace std;
int main(){

double x;
int i = 0, cont = 0;

for(i = 0; i < 6; i++){
    cin >> x;
    if(x >= 0)
        cont ++;
}
    cout << cont << " valores positivos" << endl;
}
