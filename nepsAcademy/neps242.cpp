#include <iostream>

using namespace std;

string title(string F){
	//Seu código aqui
    for(int i = 0; i < F.size(); i++){
        F[i] = tolower(F[i]);
    }
    for(int i = 0; i < F.size(); i++){
        if(i == 0 || F[i - 1] == ' '){
            F[i] = toupper(F[i]);
        }
    }
    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
