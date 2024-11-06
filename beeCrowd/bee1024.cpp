#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0;
cin >> n;
getchar();
string str;

//casos de teste
for(int i = 0; i < n; i++){
    getline(cin, str);

    //primeira passada
    for(int j = 0; j < str.size(); j++){
        if(str.at(j) >= 'A' && str.at(j) <= 'Z' || str.at(j) >= 'a' && str.at(j) <= 'z'){
            str.at(j) += 3;
        }
    }

    //segunda passada
    reverse(str.begin(), str.end());

    //metade truncada
    int metade = 0;
    if (str.size() % 2 == 0){
        metade = str.size() / 2;
    }
    else{
        metade = (str.size() - 1) / 2;
    }
    
    //terceira passada
    for(int j = metade; j < str.size(); j++){
        str[j] -=1;
    }
    cout << str << "\n";
}
}