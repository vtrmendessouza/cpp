#include <bits/stdc++.h>
using namespace std;
int main(){

double n, q = 0, s = 0;
for(int i = 1; i <= 6; i++){
cin >> n;
    if(n > 0){
    q++;
    s += n;
}
}
cout << q << " valores positivos" << endl;
cout << setprecision(1) << fixed;
cout << s / q << endl;
}
