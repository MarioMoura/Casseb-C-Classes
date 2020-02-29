#include <stdio.h>

int main(){
    int c; // apesar de lidarmos com um char, o getchar pode retornar
		   // um int representando EOF
	// enquanto c nao for igual a End Of File...
    while ( ( c = getchar() ) != EOF)
       putchar(c);
	// lembrando que: 
	// 			
	// 		getchar(void) == getc(stdin)
}
