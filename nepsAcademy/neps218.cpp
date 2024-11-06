#include <bits/stdc++.h>
using namespace std;
int main(){

char a;
double x, y;
cin >> a >> x >> y;
cout << setprecision(2) << fixed;

if(a == 'M'){
    cout << x * y;
}
else if(a == 'D'){
    cout << x / y;
}
}