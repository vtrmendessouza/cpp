#include <bits/stdc++.h>
using namespace std;
int main(){

int x, y, pri, seg, som;
som = 0;
cin >> x >> y;

if(x < y){
    pri = x;
    seg = y;
}
else{
    pri = y;
    seg = x;
}
for(int i = pri + 1; i < seg; i++){
    if(i % 2 != 0){
        som += i;
}
}
cout << som << endl;
return 0;
}
