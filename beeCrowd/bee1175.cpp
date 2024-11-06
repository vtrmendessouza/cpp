#include <bits/stdc++.h>
using namespace std;
int main(){

int v[20];
for(int i = 0; i < 20; i++){
    cin >> v[i];
}
int q = 0;
for(int i = 19; i > -1; i--){
    cout << "N[" << q << "] = " << v[i] << "\n";
    q++;
}
}