#include <stdio.h>
#include <assert.h>
#include "utils.h"

static int test1(void)
{
	char cadena[40] = "Esto es una prueba";
	char cadena2[40] = "Esto es una pruebaa";
	int res;

	// Test para función 1.1 cuenta letras
	res = cuenta_numero_letras(cadena, 'a');
	assert(res == 2);
	printf("#Test F1.1: El número de letras de la cadena es %d\n", res);

	// Test para función 1.2 compara cadena
	res = compara_cadena(cadena, cadena2);
	assert(res != 1);
	if (res == 1)
		printf("#Test F1.2: Las cadenas son iguales\n");
	else
		printf("#Test F1.2: Las cadenas son diferentes\n");

	// Test para función 1.3 tipo de letra
	res = tipo_de_letra('a');
	assert(res == 1);
	printf("#Test F1.3: El tipo de letra es %d\n", res);

	return 0;
}

static int test2(void)
{
	int res;
	char cadena[40] = "Esto es una prueba";

	// Test para función 1.4 primera letra
	res = primera_letra(cadena, 'u');
	assert(res == 8);
	printf("#Test F1.4: La letra está en la posición %d\n", res);

	// Test para función 1.6 suma números
	res = suma_numeros(7,2);
	assert(res == 9);
	printf("#Test F1.6: El resultado de la suma es: %d\n", res);

	return 0;
}

static int test3(void)
{
	int res;

	// Test para función 1.7 resta números
	res = resta_numeros(9,2);
	assert(res == 7);
	printf("#Test F1.7: El resultado de la resta es: %d\n", res);

	// Test para función 1.8 multiplica números
	res = multiplican_numeros(6,3);
	assert(res == 18);
	printf("#Test F1.8: El resultado de la multiplicación es: %d\n", res);
}

void main(void)
{
	char cadena[40] = "Esto es una cadena";

	test1();
	test2();
	test3();

	// Test para funcion 1.5 cambia letras
	printf("#Test F1.5: La cadena original es: %s\n", cadena);
	cambia_letras(cadena, 'a', 'e');
	printf("#Test F1.5: La cadena cambiada es: %s\n", cadena);
}
