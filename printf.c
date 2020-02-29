#include <stdio.h>

int main(void){
	int i 	= 1000;
	float f = 2.5;
	char c 	= 'C';
	char *s	= "STRING";

	// no formato de printf podemos escrever o texto que quisermos
	// e inserir variaveis pelo meio com o simbolo "%"
	printf("Printando o inteiro: %d \n", i);
	// se quisermos que ele pule a linha como o puts
	// devemos unserir o "\n" ( numero 10 na ASCII )
	// no final
	printf("Printando o float: %f \n", f);

	printf("Printando o char: %c \n", c);

	printf("Printando o string: %s \n", s);

	// O printf tambem pode levar varios argumentos 
	printf("Printando tudo: %d %f %c %s \n", i, f, c, s);

	return 0;
}
