#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0, q = 0;
cin >> n;

string v1, v2;

for(int i = 0; i < n; i++){
    cin >> v1[i];
}
for(int i = 0; i < n; i++){
    cin >> v2[i];
}
for(int i = 0; i < n; i++){
    if(v1[i] == v2[i]){
        q++;
    }
}
cout << q;
}