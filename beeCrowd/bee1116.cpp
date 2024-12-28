#include <bits/stdc++.h>
using namespace std;
int main() {

    float n, x, y, z;
    cout << setprecision(1) << fixed;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        z = x / y;
        if(y == 0){
            cout << "divisao impossivel" << endl;
        }
        else{
            cout << z << endl;
        }
    }
    return 0;
}
