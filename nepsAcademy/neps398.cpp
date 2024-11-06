#include <bits/stdc++.h>
using namespace std;
int main(){

string s;
getline(cin, s);
char c;
cin >> c;
int q = 0;
for(int i = 0; i < s.size(); i++){
    if(s[i] == c){
        q++;
    }
}
cout << q;
}