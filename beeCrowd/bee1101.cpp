#include <bits/stdc++.h>
using namespace std;
int main(){

int m = 0, n = 0, s =0;

do{
    cin >> m >> n;

    if(m < n && m > 0 && n > 0){
        for(int i = m; i <= n; i++){
            cout << i << " " ;
            s = s + i;
        }
        cout << "Sum=" << s << endl;
        s = 0;
    }
    else if(m > n && m > 0 && n > 0){
        for(int i = n; i <= m; i++){
            cout << i << " " ;
            s = s + i;
        }
        cout << "Sum=" << s << endl;
        s = 0;
    }
    else if(m <= 0 || n <= 0){
        return 0;
    }
}
while(m > 0 || n > 0);
}
