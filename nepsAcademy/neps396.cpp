#include <bits/stdc++.h>
using namespace std;
int main(){

int v[10];
for(int i = 0; i < 10; i++){
    cin >> v[i];
}
int x = 0, q = 0;
cin >> x;
for(int i = 0; i < 10; i++){
    if(x == v[i]){
        q ++;  
    }
}
if(q == 0){
    cout << "Mia x" << endl;
}
else{
    cout << q << endl;
    for(int i = 0; i < 10; i++){
        if(x == v[i]){
            cout << i << " ";
        }
    }
}
}