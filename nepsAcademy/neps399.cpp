#include <bits/stdc++.h>
using namespace std;
int main(){

string s1, s2, s3;
cin >> s1;

for(int i = 0; i < s1.size(); i++){
    if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'){
        s2.push_back(s1[i]);
    }
    else{
        s3.push_back(s1[i]);
    }
}
cout << "Vogais: ";
for(int i = 0; i < s2.size(); i++){
    cout << s2[i];
}
cout << endl;
cout << "Consoantes: ";
for(int i = 0; i < s3.size(); i++){
    cout << s3[i];
}
}