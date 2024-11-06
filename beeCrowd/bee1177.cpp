#include <bits/stdc++.h>
using namespace std;
int main(){

int t = 0, q = 0;
int n[1000];
cin >> t;

for(int i = 0; i < 1000; i++){
    n[i] = q;
    q++;
    if(q == t){
        q = 0;
    }
}
for(int i = 0; i < 1000; i++){
    cout << "N[" << i << "] = " << n[i] << endl;
}
}
