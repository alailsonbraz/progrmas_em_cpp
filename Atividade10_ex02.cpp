#include <iostream>
using namespace std;

int main(){
	
	setlocale (LC_CTYPE,"Portuguese");

    cout << "Digite um numero: " << endl;
    int numero = 0;
    cin >> numero;

    numero >= 0 ?  cout << "O valor final absoluto �: " << numero++ :  cout << "O valor final absoluto �: " << numero-- *(-1) ;

    return 0;
}
