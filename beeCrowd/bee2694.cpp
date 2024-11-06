#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0;
cin >> n;
string s, s1, s2, s3;

for(int i = 0; i < n; i++){
    cin >> s;

    for(int j = 2; j < 4; j++){
        s1[j] = s[j];
    }
    for(int j = 5; j < 8; j++){
        s2[j] = s[j];
    }
    for(int j = 11; j < 13; j++){
        s3[j] = s[j];
    }
    for(int j = 0; j < 2; j ++){
        cout << s1[j] << endl;
    }
    for(int j = 0; j < 3; j ++){
        cout << s2[j] << endl;
    }
    for(int j = 0; j < 2; j ++){
        cout << s3[j] << endl;
    }
}
}