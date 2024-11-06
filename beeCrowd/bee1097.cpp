#include <bits/stdc++.h>
using namespace std;
int main(){

int x, y;
x = 1;
y = 7;

cout << "I=" << x << " J=" << y << endl;
cout << "I=" << x << " J=" << y - 1 << endl;
cout << "I=" << x << " J=" << y - 2 << endl;

for(int i = 1; i <= 4; i++){
    x = x + 2;
    y = y + 2;
cout << "I=" << x << " J=" << y << endl;
cout << "I=" << x << " J=" << y - 1 << endl;
cout << "I=" << x << " J=" << y - 2 << endl;
}
return 0;
}
