#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int va, vb, soma, sub, mult;
	float div;
	
	cout<< "Informe o valor 1: " <<endl;
	cin>>va;
	cout<< "Informe o valor 2: " <<endl;
	cin>>vb;
	
	
	soma = va + vb;
	cout<< "O resultado da soma é: " << soma <<endl;
	sub = va - vb;
	cout<< "O resultado da subtração é: " << sub <<endl;
	mult = va * vb;
	cout<< "O resultado da multiplicação é: " << mult <<endl;
	div = (float)va/(float)vb;
	cout<< "O resultado da divisão é: " << div <<endl;
	
}
