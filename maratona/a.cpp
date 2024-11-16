#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0, p = 0, q = 0;
cin >> n >> p;

if(n == 0 || p == 0){
    cout << endl;
    return 0;
}
if(n % p == 0){
    q = (n / p) - 4;
}
else if(n % p != 0){
    q = (n / p) - 3;
}
if(q <= 2){
    q = 2;
}
else if(q >= 16){
    q = 16;
}
string inicio = "P";
string meio = "";
string final = "dle";
for(int i = 0; i < q; i++){
    meio.push_back('o');
}
cout << inicio << meio << final << endl;
return 0;
}