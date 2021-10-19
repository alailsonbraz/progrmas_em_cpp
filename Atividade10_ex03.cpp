#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(){
	
	setlocale (LC_ALL,"pt");
	float nota = 0;
	char nome[10], status1[10]="Aprovado", status2[10]="Reprovado";
	
	
    printf("Digite o nome do aluno; ");
    scanf("%s", nome);
    printf("Insira a nota do aluno %s ", nome);
    scanf("%f", &nota);
    
    //nota >=10 ? strcat (status,"Aprovado"): strcat (status,"Reprovado");
	
	printf("\tNOME \tNOTA \tSTATUS\n"); 
	printf("\t%s\t%.2f\t%s ", nome, nota, nota >=10 ?  status1:status2); 
    
}
