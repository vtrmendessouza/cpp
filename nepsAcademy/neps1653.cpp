#include <bits/stdc++.h>
using namespace std;
int main(){

int a, b, c, d, e;
cin >> a >> b >> c >> d;

if((a + d) - (b + c) >= 0){
    e = (a + d) - (b + c);
}
else{
    e = (b + c) - (a + d);
}
cout << e << endl;
}
