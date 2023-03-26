#include <stdio.h>
#define PI 3.141592


int main(){
	float raio, altura;
	
	printf("Informe o raio: ");
	scanf("%f", &raio);

	printf("Informe o altura: ");
	scanf("%f", &altura);
		
	printf("O volume do cilindro eh: %.1f\n", (PI*raio*raio*altura));
	return 0;
}
