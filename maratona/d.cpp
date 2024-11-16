#include <bits/stdc++.h>
using namespace std;
int main(){

int t = 0, q = 0;
cin >> t;

if(t > 5){
    for(int i = 10; i <= t; i += 5){
        q += 2;
    }
}
else{
    q = 1;
}
cout << q << endl;
}