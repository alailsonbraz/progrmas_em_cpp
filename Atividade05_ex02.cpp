#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	
	cout<<"Informe o n�mero 1: " << endl;
	cin>>n1;
	
	cout<<"Informe o n�mero 2: " << endl;
	cin>>n2;
	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	cout<<"Os valores foram trocados: " << endl;
	cout<<"O n�mero 1 agora �: "<< n1 << endl;
	cout<<"O n�mero 2 agora �: "<< n2 << endl;
	
	}	
