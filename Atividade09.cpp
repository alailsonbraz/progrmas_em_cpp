#include <stdio.h>
#include <string.h>
#include <locale.h>


#define MAX 9 // Define um valor constante

int main() {

    setlocale(LC_CTYPE, "Portuguese");

    char nome1[8]="estação",nome2[8]="outono",nome3[20];
    int result;
    
	//imprimir string invertida
    printf("Primeiro nome invertido: %c%c%c%c%c%c%c \n", nome1[6], nome1[5],nome1[4],nome1[3],nome1[2], nome1[1], nome1[0]);
    
	//guardando previamente o nome1
	strcpy(nome3, nome1);
    
    //preparando e concatenando as strings
    strcpy(nome1, nome3); 	 
    strcat(nome1, " ");
    strcat(nome1, nome2);
        
    puts(nome1);
   	
   	//tamanho das strings
   	printf("Tamanho do primeiro nome: %zu \n", strlen(nome3));
   	printf("Tamanho do primeiro nome: %zu \n", strlen(nome2));
   	
   	//comparando as strings
   	result = strcmp(nome3, nome2);
 	printf("strcmp(nome1, nome2) = %d\n", result);
  


}
