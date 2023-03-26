#include <stdio.h>

int main(){
	float preco, perc;

	printf("Informe o valor inicial: ");
	scanf("%f", &preco);
	
	printf("Informe o acrecimo em porcentagem: ");
	scanf("%f", &perc);

	printf("O preco apos o acrecimo eh: %.1f", (((perc/100)*preco)+preco));
	return 0;
}
