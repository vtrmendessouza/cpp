#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a;
    for(int i = 0; i < a; i ++){
        c = 0;
        cin >> b;
        for(int j = 2; j < b; j++){
            if(b % j == 0){
                c ++;
            }
        }
        if(c > 0){
            cout << b << " nao eh primo" << endl;
        }
        else{
            cout << b << " eh primo" << endl;
        }
    }
    return 0;
}