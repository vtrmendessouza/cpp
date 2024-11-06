#include <bits/stdc++.h>
using namespace std;
int main(){

int x, y;
x = 1;
y = 60;
cout << "I=" << x << " J=" << y << endl;

for(int i = 1; i <= 12; i++){
    x = x + 3;
    y = y - 5;
    cout << "I=" << x << " J=" << y << endl;
}
return 0;
}
