#include <bits/stdc++.h>
using namespace std;
int main(){

int c = 0;
cin >> c;
string s1, s2;

for(int i = 0; i < c; i++){
    cin >> s1;
    for(int j = 0; j < s1.size(); j++){
        if(s1[j] >= 'a' && s1[j] <= 'z'){
            s2.push_back(s1[j]);
        }
    }
    reverse(s2.begin(), s2.end());
    cout << s2 << endl;
    s2.erase(0, s2.size());
}
}