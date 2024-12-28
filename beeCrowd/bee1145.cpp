#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, q = 0;
    cin >> x >> y;
    for(int i = 0; i < y; i ++){
        cout << i + 1;
        q++;
        if(q == x){
            cout << endl;
            q = 0;
        }
        else{
            cout << " ";
        }
    }
    return 0;
}