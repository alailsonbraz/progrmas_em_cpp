#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float tc, tf;
	const float constFC = 1.8;
	
	cout<<"Informe a temperatura em �C: " << endl;
	cin>>tc;
	tf = constFC*tc+32;
	cout<<"A temperatura em Fahrenheit �: " << tf;
	}
