#include <stdio.h>
#include <math.h>

int main(){
	float c1, c2, hip;

	printf("Informe o primeiro cateto:");
	scanf("%f",&c1);

	printf("Informe o segundo cateto:");
	scanf("%f",&c2);

	hip = sqrt(pow(c1,2)+pow(c2,2));

	printf("A hipotenusa eh: %.1f\n", hip);
	
	return 0;
}
