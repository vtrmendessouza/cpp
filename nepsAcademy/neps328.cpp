#include <iostream>
#include <iomanip>

using namespace std;

double media_vetor(int n, int v[]){
	// Seu código aqui.
    double q = 0, s = 0, m = 0;
    for(int i = 0; i < n; i++){
        q ++;
        s += v[i];
    }
    m = s / q;
    return m;
}

int main(){	
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << setprecision(2) << fixed;

	cout << media_vetor(n,v) << "\n";
}
