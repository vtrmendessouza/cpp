#include <bits/stdc++.h>
using namespace std;
int main(){

    float n1, n2, n3, n4, n5, m;
    cin >> n1 >> n2 >> n3 >> n4;
    m = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);
    cout << setprecision(1) << fixed;
    cout << "Media: " << m << endl;

    if(m >= 7){
        cout << "Aluno aprovado." << endl;
    }
    else if(m >= 5 && m <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        m = (m + n5) / 2;
        if(m >= 5){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << m << endl;
            return 0;
        }
    }
    else{
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}
