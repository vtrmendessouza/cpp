#include <bits/stdc++.h>
using namespace std;
int main(){

double v[100];
for(int i = 0; i < 100; i++){
    cin >> v[i];
}
for(int i = 0; i < 100; i++){
    if(v[i] <= 10){
        cout << setprecision(1) << fixed;
        cout << "A[" << i << "] = " << v[i] << "\n";
    }
}
}