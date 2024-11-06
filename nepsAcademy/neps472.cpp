#include <bits/stdc++.h>
using namespace std;
int main(){

int n, m;
char p;
cin >> n >> p;

for(int i = 1; i <= n; i++){
    cin >> m;
    if(m == 1){
        if(p == 'A'){
            p = 'B';
        }
        else if(p == 'B'){
            p = 'A';
        }
    }
    if(m == 2){
        if(p == 'B'){
            p = 'C';
        }
        else if(p == 'C'){
            p = 'B';
        }
    }
    if(m == 3){
        if(p == 'A'){
            p = 'C';
        }
        else if(p == 'C'){
            p = 'A';
        }
    }
}
cout << p << endl;
return 0;
}
