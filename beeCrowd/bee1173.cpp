#include <bits/stdc++.h>
using namespace std;
int main(){

int x = 0;
cin >> x;
int v[10];
for(int i = 0; i < 10; i++){
    if(i == 0){
        v[i] = x;
    }
    else{
        v[i] = v[i - 1] * 2;
    }
}
for(int i = 0; i < 10; i++){
    cout << "N[" << i << "] = " << v[i] << "\n";
}
}