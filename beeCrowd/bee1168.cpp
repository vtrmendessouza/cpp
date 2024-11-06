#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0, led = 0;
cin >> n;
getchar();
string str;

for(int i = 0; i < n; i++){
    getline(cin, str);

    for(int j = 0; j < str.size(); j++){
        if(str.at(j) == '0'){
            led += 6;
        }
        else if(str.at(j) == '1'){
            led += 2;
        }
        else if(str.at(j) == '2'){
            led += 5;
        }
        else if(str.at(j) == '3'){
            led += 5;
        }
        else if(str.at(j) == '4'){
            led += 4;
        }
        else if(str.at(j) == '5'){
            led += 5;
        }
        else if(str.at(j) == '6'){
            led += 6;
        }
        else if(str.at(j) == '7'){
            led += 3;
        }
        else if(str.at(j) == '8'){
            led += 7;
        }
        else if(str.at(j) == '9'){
            led += 6;
        }
    }
    cout << led << " leds\n";
    led = 0;
}
}