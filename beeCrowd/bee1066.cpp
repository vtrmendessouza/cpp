#include <bits/stdc++.h>
using namespace std;
int main(){

int n, q1, q2, q3, q4;
q1 = 0;
q2 = 0;
q3 = 0;
q4 = 0;

for(int i = 1; i <= 5; i++){
cin >> n;
    if(n % 2 == 0){
    q1++;
}
    if(n % 2 != 0){
    q2++;
}
    if(n > 0){
    q3++;
}
    if(n < 0){
    q4++;
}
}
cout << q1 << " valor(es) par(es)" << endl;
cout << q2 << " valor(es) impar(es)" << endl;
cout << q3 << " valor(es) positivo(s)" << endl;
cout << q4 << " valor(es) negativo(s)" << endl;
}
