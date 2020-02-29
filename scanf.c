#include <stdio.h>

int main(void){
	int i;
	char c;
	float f = 0;
	char s[20];

	// o operador "&" significa o endereco a variavel 
	// em sequencia
	printf("Digite: int char float:");
	scanf("%i %c %f", &i, &c, &f);
	
	// Complicado, mas em resumo:
	// se sobrar input com o scanf o getchar
	// vai comer ele 
	int clear;
	while((clear = getchar()) != '\n' && clear != EOF);

	printf("Digite uma string:");
	scanf("%s", s);
	

	puts(s);
	printf("%i %c %f \n", i, c, f);

	return 0;
}
