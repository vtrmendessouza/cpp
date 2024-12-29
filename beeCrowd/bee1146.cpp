#include <bits/stdc++.h>
using namespace std;
int main() {

    int x;

    do{
        cin >> x;
        if(x > 0){
            for(int j = 1; j <= x; j++){
                cout << j;
                if(j < x){
                    cout << " ";
                }
                else{
                    cout << endl;
                }
            }
        }
    }
    while(x > 0);
    return 0;
}