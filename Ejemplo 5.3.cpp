/*Ejemplo 5.3
05 de febrero de 2020*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
float numero; //Variable local
	printf("Introduzca un numero positivo o negativo: ");
	scanf("%f", &numero);
	
	/*comparar numero*/
	
	if(numero>0)
	 	printf("%f es mayor que cero\n", numero);//salida
	if(numero==0)
		printf("%f es igual a cero\n", numero);//salida
	if(numero<0)
		printf("%f es menor que cero\n", numero);//salida
	system("pause");
	return 0;
	
 } 
