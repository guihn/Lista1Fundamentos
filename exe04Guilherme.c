#include <stdio.h>

int main(){
	const float valor=780000.0;
	printf("O valor que o primeiro ganhador recebera sera: %.1f\n", (0.46*valor));
	printf("O valor que o segundo ganhador recebera sera: %.1f\n", (0.32*valor));
	printf("O valor que o terceiro ganhador recebera sera: %.1f\n", (0.22*valor));
	
	return 0;
}
