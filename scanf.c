#include <stdio.h>

int main(void){
	int i;
	char c;
	float f;

	// o operador "&" significa o endereco a variavel 
	// em sequencia
	scanf("%i %c %f", &i, &c, &f);

	printf("%i %c %f \n", i, c, f);

	return 0;
}
