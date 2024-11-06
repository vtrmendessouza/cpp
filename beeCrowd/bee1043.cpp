#include <bits/stdc++.h>
using namespace std;
int main(){

double a, b, c, perimetro, area;
cin >> a >> b >> c;
perimetro = a + b + c;
area = (a + b) * c / 2;
cout << setprecision(1) << fixed;

if (a < (b + c) && b < (a + c) && c < (a + b)){
    cout << "Perimetro = " << perimetro << endl;
}
else{
    cout << "Area = " << area << endl;
}
}
