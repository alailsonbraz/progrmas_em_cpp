#include <iostream>
using namespace std;

int main(){
	
	setlocale (LC_CTYPE,"Portuguese");

    cout << "Digite um numero: " << endl;
    int numero = 0;
    cin >> numero;

    numero >= 0 ? numero++ : numero--;

    cout << "O valor final é " << numero << endl;

    return 0;
}
