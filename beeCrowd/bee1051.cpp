#include <bits/stdc++.h>
using namespace std;
int main(){

double x;
cin >> x;
cout << setprecision(2) << fixed;

if (x >= 0 && x <= 2000){
    cout << "Isento" << endl;
}
if (x >= 2000.01 && x <=3000){
    cout << "R$ " << (x - 2000) * 0.08 << endl;
}
if (x >= 3000.01 && x <=4500){
    cout << "R$ " << ((x - 2000) * 0.08) + ((x - 3000) * 0.1) << endl;
}
if (x > 4500){
    cout << "R$ " << ((x - 2000) * 0.08) + ((x - 3000) * 0.1) + ((x - 4500) * 0.1) << endl;
}
}
