#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Portuguese");
	float lado, area;
	
	cout << "Informe o lado do quadrado em cm: " <<endl;
	cin >> lado;
	
	area=lado*lado;
	
	cout<< "A �rea do quadrado � de " << area << " cm";
	
}
