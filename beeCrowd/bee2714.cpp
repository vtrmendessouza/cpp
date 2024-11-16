#include <bits/stdc++.h>
using namespace std;
int main(){

string s1, s2;
int x = 0, q = 0;
cin >> x;

for(int i = 0; i < x; i++){
    cin >> s1;

    if(s1.size() != 20){
        cout << "INVALID DATA" << endl;
    }
    else if(s1.at(0) != 'R' || s1.at(1) != 'A'){
        cout << "INVALID DATA" << endl;
    }
    else{
        for(int j = 2; j < s1.size(); j++){
            if(s1[j] != '0'){
                q++;
            }
            if(q != 0){
                s2.push_back(s1[j]);
            }
        }
        cout << s2 << endl;
    }
    s2.erase();
    q = 0;
}
}
