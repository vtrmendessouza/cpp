#include <bits/stdc++.h>
using namespace std;
int main(){

int x = 0, y = 0, q = 0;
cin >> x;

for(int i = 1; i <= x; i++){
    cin >> y;
    q = 0;
    for(int j = 1; j < y; j++){
        if(y % j == 0){
            q += j;
        }
    }
    /*if(q == y){
        cout << y << " eh perfeito" << endl;
        }
    else{
        cout << y << " nao eh perfeito" << endl;
    }*/
    q==y ? cout << y << " eh perfeito" << endl : cout << y << " nao eh perfeito" << endl;
}
}
