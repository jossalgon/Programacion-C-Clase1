/*
 * es mayor que 5, si es así imprimir un mensaje usando printf confirmando
 * que es mayor. En caso contrario, escribir un mensaje
 */

/* Bibliotecas a incluir */
#include <stdio.h>

void main(void) {
	/* Declaración de variables */
	int i = 3;

	/* Código usando condicional if */
	if (i > 5)
		printf("i es mayor que 5 \n");
	else
		printf("i es menor o igual que 5 \n");
}
