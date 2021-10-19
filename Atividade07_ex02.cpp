#include <iostream>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	
	float n1, n2;
	
	printf("Insira o número 1\n", n1 );
	scanf("%f",&n1);
	
	printf("Insira o número 2\n", n2 );
	scanf("%f",&n2);
	
	printf("O resultado da potência de %.2f e %.2f é %.2f\n", n1, n2, pow(n1, n2));

   	
   
   return(0);	
	
}
