#include <string.h>

int cuenta_numero_letras(char cadena[], char letra)
{
	int cuenta = 0;
	int i;

	for (i = 0; i < strlen(cadena); i++) {
		if (cadena[i] == letra)
			cuenta++;
	}
	return cuenta;
}

int compara_cadena(char *cadena1, char *cadena2)
{
	int compara;

	compara = strcmp(cadena1, cadena2);
	if (compara == 0)
		return 1;
	else
		return 0;
}

int tipo_de_letra(char letra)
{
	switch (letra) {
	case 'a':
		return 1;
		break;
	case 'c':
		return 2;
		break;
	case 'e':
		return 3;
		break;
	default:
		return 0;
		break;
	}
}

int primera_letra(char cadena[], char letra)
{
	int i;

	for (i = 0; i < strlen(cadena); i++) {
		if (cadena[i] == letra)
			break;
		else
			continue;
	}
	return i;
}

int cambia_letras(char cadena[], char letraoriginal, char letracambiar)
{
	int i;

	for (i = 0; i < strlen(cadena); i++) {
		if (cadena[i] == letraoriginal)
			cadena[i] = letracambiar;
	}
	return 0;
}

int suma_numeros(int n, int m)
{
	return n + m;
}

int resta_numeros(int n, int m)
{
	return n - m;
}

int multiplican_numeros(int n, int m)
{
	return n * m;
}
