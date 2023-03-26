#include <stdio.h>

int main(){
	float valor;
	printf("Informe o valor de um produto: ");
	scanf("%f", &valor);
	printf("Valor sem desconto: %.1f\n", valor);
	printf("Valor com desconto: %.1f\n", valor*0.07);
	return 0;
}
