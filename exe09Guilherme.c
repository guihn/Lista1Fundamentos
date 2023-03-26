#include <stdio.h>
#include <math.h>

int main(){
	float apm, tx, nm;
	printf("Informe a aplicacao mensal: ");
	scanf("%f", &apm);
	
	printf("Informe a taxa: ");
	scanf("%f", &tx);
	
	printf("Informe o numero de meses: ");
	scanf("%f", &nm);	
	
	printf("O rendimento sera de: %.1f",(apm*(pow((1+tx),nm)-1)/tx));
	return 0;
}
