#include <stdio.h>

int main(){
	float vel;
	printf("Informe a velocidade em km/h: ");
	scanf("%f",&vel);
	printf("A velocidade em m/s eh: %.1f\n", (vel/3.6));
	return 0;
}
