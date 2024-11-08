#include <bits/stdc++.h>
using namespace std;
int main(){

string s;
getline(cin, s);
reverse(s.begin(), s.end());
cout << s << endl;
}
/*
long int x;
cin >> x;

string s = to_string(x);
reverse(s.begin(), s.end());
vector <int> v;

for(int i = 0; i < s.size(); i++){
    v.push_back(s[i]);
}
for(int i = 0; i < v.size(); i++){
    cout << v[i];
}
cout << endl;
*/
