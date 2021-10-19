#include<stdio.h>
#include<time.h>

int main(){
	
	int diaNasc, mesNasc, anoNasc, diaAtual, mesAtual, anoAtual, difDia, difMes, difAno, totalDias;
	
	printf("Informe o dia atual: \n");
	scanf("%d",&diaAtual);
	printf("Informe o mes atual: \n");
	scanf("%d",&mesAtual);
	printf("Informe o ano atual: \n");
	scanf("%d",&anoAtual);
	
	printf("Informe o dia de nascimento: \n");
	scanf("%d",&diaNasc);
	printf("Informe o mes de nascimento: \n");
	scanf("%d",&mesNasc);
	printf("Informe o ano de nascimento: \n");
	scanf("%d",&anoNasc);
	
	difDia = diaAtual - diaNasc;
	
	difMes = (mesAtual - mesNasc)*30;

	difAno = (anoAtual - anoNasc)*365;
	
	totalDias = difDia+difMes+difAno;
	printf("Total: %d", totalDias);
}
