#include <bits/stdc++.h>
using namespace std;
int main(){

string x, v;
cin >> x;

for(int i = 0; i < x.size(); i++){
    if(x.at(i) == 'A' || x.at(i) == 'B' || x.at(i) == 'C'){
        v.push_back('2');
    }
    else if(x.at(i) == 'D' || x.at(i) == 'E' || x.at(i) == 'F'){
        v.push_back('3');
    }
    else if(x.at(i) == 'G' || x.at(i) == 'H' || x.at(i) == 'I'){
        v.push_back('4');
    }
    else if(x.at(i) == 'J' || x.at(i) == 'K' || x.at(i) == 'L'){
        v.push_back('5');
    }
    else if(x.at(i) == 'M' || x.at(i) == 'N' || x.at(i) == 'O'){
        v.push_back('6');
    }
    else if(x.at(i) == 'P' || x.at(i) == 'Q' || x.at(i) == 'R' || x.at(i) == 'S'){
        v.push_back('7');
    }
    else if(x.at(i) == 'T' || x.at(i) == 'U' || x.at(i) == 'V'){
        v.push_back('8');
    }
    else if(x.at(i) == 'W' || x.at(i) == 'X' || x.at(i) == 'Y' || x.at(i) == 'Z'){
        v.push_back('9');
    }
    else{
        v.push_back(x[i]);
    }
}
for(int i = 0; i < v.size(); i++){
    cout << v[i];
}
}