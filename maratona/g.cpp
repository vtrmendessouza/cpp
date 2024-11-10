#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0, f = 0, q = 0;
cin >> n;

for(int i = 0; i < n; i++){
    cin >> f;
    for(int j = 0; j < f; j++){
        q++;
    }
    cout << q << endl;
    q = 0;
}
}