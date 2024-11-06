#include <bits/stdc++.h>
using namespace std;
int main(){

int x;
cin >> x;

if(x % 2 == 0){
    for(int i = x + 1; x <= 13; i++){
        if(x % 2 != 0){
        cout << i << endl;
        }
    }
}
else{
    for(int i = x; x <= 12; i++){
        if(x % 2 != 0){
        cout << i << endl;
        }
    }
}
}
