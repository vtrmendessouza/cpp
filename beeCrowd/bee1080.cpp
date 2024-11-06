#include <bits/stdc++.h>
using namespace std;
int main(){

int n, m, p;
m = 0;
p = 0;

for(int i = 1; i <= 100; i++){
    cin >> n;
        if(n > m){
        m = n;
        p = i;
}
}
cout << m << endl;
cout << p << endl;
return 0;
}
