#include <bits/stdc++.h>
using namespace std;
int main(){

int n, x = 2;
cin >> n;
/*
m[a][b]
a = 2
b = a
c = a * b;
*/
for(int i = 1; i <= n; i++){
        x = x * 2 - 1;
}
cout << x * x << endl;
return 0;
}
