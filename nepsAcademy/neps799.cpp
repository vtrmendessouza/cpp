#include <bits/stdc++.h>
using namespace std;
int main(){

string s1 = "Reluew Markinhos", s2, s3, s4;
int n;
cin >> s2;
cin >> n;
cin >> s3;

if(s2.compare(s1) == 0){
//    s4.resize(s3.size());
    for(int i = 0; i < s3.size(); i++){
        s4[i] = s3[i] + n;
    }
cout << s4;
}
else{
    cout << "Nao eh possivel descriptografar!";
}
}
