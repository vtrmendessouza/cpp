#include <bits/stdc++.h>
using namespace std;
int main(){

int x;
cin >> x;
cout << x / 365 << " ano(s)" << endl;
cout << (x % 365) / 30 << " mes(es)" << endl;
cout << x % 365 % 30 << " dia(s)" << endl;
}
