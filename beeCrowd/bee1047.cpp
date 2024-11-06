#include <bits/stdc++.h>
using namespace std;
int main(){

int h1, m1, h2, m2, h3, m3;
cin >> h1 >> m1 >> h2 >> m2;

if(h1 < h2 && m1 < m2){
    h3 = h2 - h1;
    m3 = m2 - m1;
}
else if(h1 < h2 && m1 > m2){
    h3 = h2 - h1 -1;
    m3 = m2 - m1 + 60;
}
else if(h1 < h2 && m1 == m2){
    h3 = h2 - h1;
    m3 = 0;
}
else if(h1 > h2 && m1 < m2){
    h3 = h2 - h1 + 24;
    m3 = m2 - m1;
}
else if(h1 > h2 && m1 > m2){
    h3 = h2 - h1 + 24;
    m3 = m2 - m1 + 60;
}
else if(h1 > h2 && m1 == m2){
    h3 = h2 - h1 + 24;
    m3 = 0;
}
else if(h1 == h2 && m1 < m2){
    h3 = 0;
    m3 = m2 - m1;
}
else if(h1 == h2 && m1 > m2){
   h3 = 23;
   m3 = m2 - m1 + 60;
}
else if(h1 == h1 && m1 == m2){
    h3 = 24;
    m3 = 0;
}
cout << "O JOGO DUROU " << h3 << " HORA(S) E " << m3 << " MINUTO(S)" << endl;
}
