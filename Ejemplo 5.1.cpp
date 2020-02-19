/*Prueba de divisibilidad
04 de febrero de 2020*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, d;
	printf ("Introduzca dos enteros:");
	scanf ("%d%d", &n, &d);
	if (n % d == 0)
	printf("%d es divisible por %d\n", n,d);
	
	puts("\n\n\n\n\n Oprima cualquier tecla para terminar");
	system("pause");
	return 0;
	
 } 
