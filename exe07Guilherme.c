#include <stdio.h>

int main(){
	int idade, ano;
	printf("Informe a idade: ");
	scanf("%d", &idade);

	printf("Informe o ano atual: ");
	scanf("%d", &ano);

	printf("O ano de nascimento eh: %d",(ano-idade));
	return 0;
}
