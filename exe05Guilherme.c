#include <stdio.h>
#define PI 3.141592

int main(){
	float ang;
	printf("Informe o angulo em graus: ");
	scanf("%f", &ang);
	printf("O valor em radianos eh: %.1f", (ang*(PI/180)));
	return 0;
}
