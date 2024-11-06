#include <bits/stdc++.h>
using namespace std;
int main(){

double x, som, qua;
som = 0;
qua = 0;

while(cin >> x){
    if(x >= 0){
        som = som + x;
        qua = qua + 1;
    }
    else{
        cout << setprecision(2) << fixed;
        cout << som / qua << endl;
        break;
    }
}
}
