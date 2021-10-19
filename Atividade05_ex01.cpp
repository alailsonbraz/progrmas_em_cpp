#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	
	cout<<"Informe o Peso: " << endl;
	cin>>peso;
	
	cout<<"Informe a altura: " << endl;
	cin>>altura;
	
	imc=peso/(altura*altura);
	
	cout<<"O imc é: " << imc;
	}
