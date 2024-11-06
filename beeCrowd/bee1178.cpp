//5%
#include <bits/stdc++.h>
using namespace std;
int main(){

double x = 0;
cin >> x;
double v[100];
for(int i = 0; i < 100; i++){
    if(i != 0){    
        v[i] = v[i - 1] / 2;
    }
    else{
        v[i] = x;
    }
}
for(int i = 0; i < 100; i++){
    cout << setprecision(4) << fixed;
    cout << "N[" << i << "] = " << v[i] << "\n";
}
}