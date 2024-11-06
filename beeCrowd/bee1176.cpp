#include <bits/stdc++.h>
using namespace std;
int main(){

/*int t = 0, n = 0;
unsigned long long int fib[61];
fib[0] = 0;
fib[1] = 1;

for(int i = 2; i < 61; i++){
    fib[i] = fib[i - 1] + fib[i - 2];
}
cin >> t;
for(int j = 1; j <= t; j++){
    cin >> n;
    cout << "Fib(" << n << ") = " << fib[n] << endl;
}*/
int t = 0, n = 0;
vector<unsigned long long int> fib;
fib.push_back(0);
fib.push_back(1);

for(int i = 2; i < 61; i++){
    fib[i] = fib[i - 1] + fib[i - 2];

    fib.push_back(fib.at(i - 1) + fib.at(i - 2));
}
cin >> t;
for(int j = 1; j <= t; j++){
    cin >> n;
    cout << "Fib(" << n << ") = " << fib[n] << endl;
}
}
