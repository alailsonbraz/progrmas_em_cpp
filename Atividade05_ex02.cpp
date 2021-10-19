#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	
	cout<<"Informe o número 1: " << endl;
	cin>>n1;
	
	cout<<"Informe o número 2: " << endl;
	cin>>n2;
	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	cout<<"Os valores foram trocados: " << endl;
	cout<<"O número 1 agora é: "<< n1 << endl;
	cout<<"O número 2 agora é: "<< n2 << endl;
	
	}	
