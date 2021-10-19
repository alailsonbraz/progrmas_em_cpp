#include<stdio.h>

int main(){
	char palavra[6]={'p','o','r','t','o','\0'};
	int cod[6];
	
	cod[0] = (int)palavra[0];
	cod[1] = (int)palavra[1];
	cod[2] = (int)palavra[2];
	cod[3] = (int)palavra[3];
	cod[4] = (int)palavra[4];

	printf("Cod ASCII das letras da palavra  porto: %d, %d, %d, %d, %d",cod[0],cod[1],cod[2],cod[3],cod[4],cod[5]);
}
