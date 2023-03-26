#include <stdio.h>
#define PI 3.141592

int main(){
	float raio;

	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	printf("A area do circulo eh: %.1f\n", PI*raio*raio);
	return 0;
}
