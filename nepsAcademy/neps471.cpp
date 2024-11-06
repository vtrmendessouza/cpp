#include <bits/stdc++.h>
using namespace std;
int main(){

int j, p, v, e, d;
cin >> j >> p >> v >> e >> d;
/*
j = v + e + d;
p = (3 * v) + (1 * e) + (0 * d);

v = j - e - d;
v = (p - e) / 3;

e = j - v - d;
e = p - 3 * v;

d = j - v - e;
*/
if(j < 0 && v < 0){
    v = (p - e) / 3;
    j = v + e + d;
}
if(j < 0 && e < 0){
    e = p - 3 * v;
    j = v + e + d;
}
if(j < 0){
    j = v + e + d;
}
if(p < 0 && v < 0){
    v = j - e - d;
    p = 3 * v + e;
}
if(p < 0 && e < 0){
    e = j - v - d;
    p = 3 * v + e;
}
if(p < 0){
    p = 3 * v + e;
}
if(v < 0){
    v = j - e - d;
}
if(e < 0){
    e = j - v - d;
}
if(d < 0){
    d = j - v - e;
}
cout << j << " " << p << " " << v << " " << e << " " << d << endl;
return 0;
}
