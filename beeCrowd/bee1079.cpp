#include <bits/stdc++.h>
using namespace std;
int main(){

double n0, n1, n2, n3, m;
cin >> n0;

for(int i = 1; i <= n0; i++){
    cin >> n1 >> n2 >> n3;
    m = ((n1*2) + (n2*3) + (n3*5)) / (2+3+5);
        cout << setprecision(1) << fixed;
        cout << m << endl;
}
return 0;
}
