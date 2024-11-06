#include <bits/stdc++.h>
using namespace std;
int main(){


int v[10];
for(int i = 0; i < 10; i++){
    cin >> v[i];
}
for(int i = 0; i < 10; i++){
    if(v[i] < 1){
        v[i] = 1;
    }
}
for(int i = 0; i < 10; i++){
    cout << "X[" << i << "] = " << v[i] << "\n";
}
}