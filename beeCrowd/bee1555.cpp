#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0, x = 0, y = 0;
cin >> n;

for(int i = 0; i < n; i++){
    cin >> x >> y;
    
    int rafael = ((3 * x) * (3 * x)) + (y * y);
    int beto = (2 * (x * x)) + ((5 * y) * (5 * y));
    int carlos = (-100 * x) + (y * y * y);
    
    if(rafael > beto && rafael > carlos){
        cout << "Rafael ganhou" << endl;
    }
    else if(beto > rafael && beto > carlos){
        cout << "Beto ganhou" << endl;
    }
    else if(carlos > rafael && carlos > beto){
        cout << "Carlos ganhou" << endl;
    }
}
}