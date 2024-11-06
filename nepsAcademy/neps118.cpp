#include <bits/stdc++.h>
using namespace std;
int main(){

string s1, s2, s3;
cin >> s1;

for(int i = 0; i < s1.size(); i++){
    if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'){
        s2.push_back(s1[i]);
        s3.push_back(s1[i]);
    }
}
reverse(s3.begin(), s3.end());
int q =0;
for(int i = 0; i < s2.size(); i++){
    if(s2[i] == s3[i]){
        q++;
    }
}
if(q == s2.size()){
    cout << 'S';
}
else{
    cout << 'N';
}
}