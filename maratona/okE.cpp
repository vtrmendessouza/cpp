#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0, q = 0;
string escada;
cin >> n;

for(int i = 0; i < n; i++){
    q++;
    for(int j = 0; j < n - q; j++){
        escada.push_back(' ');
    }
    for(int j = 0; j < q; j++){
        escada.push_back('#');
    }
cout << escada << endl;
escada.erase();
}
}