#include <bits/stdc++.h>
using namespace std;
int main(){

int x, y, pri, seg;
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
        if(i % 5 == 2 || i % 5 == 3){
            cout << i << endl;
}
}
return 0;
}
