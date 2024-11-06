#include <bits/stdc++.h>
using namespace std;
int main(){

int x = 0, x1 = 0, x2 = 0, x3 = 0, q = 0;
string x4 = "PUM", x5 = " ";
cin >> x;

for(int i = 0; i < x; i++){
    x1 = i + 1 + q;
    x2 = i + 2 + q;
    x3 = i + 3 + q;
    q = q + 3;
    cout << x1 << x5 << x2 << x5 << x3 << x5 << x4 << endl;
}
}
