#include <bits/stdc++.h>
using namespace std;
int main(){

int a, b, c, m;
cin >> a >> b;
m = a;
/*
m = (a + b + c) / 3
m = (a + b + c) / 3
m * 3 = a + b + c
m * 3 - a - b = c
*/
c = m * 3 - a - b;
cout << c << endl;
}
