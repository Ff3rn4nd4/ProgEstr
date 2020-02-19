/*Calcular el mayor de dos nu´meros lei´dos del teclado y visualizarlo en pantalla. Fecha*/ 
#include <stdio.h>
#include <stdlib.h> 
int main()
{
   int x, y; //variables locales 
   printf("Introduzca dos enteros:"); 
  scanf("%d%d", &x, &y); 
  
  //Comparacion de los numeros con if/else
  
  if (x > y)	
  	printf("El numero mayor es: %6d\n",x); 
  else
  	printf("El numero mayor es: %6d\n",y); 
	  
  //comparacion de los numeros ?:
  puts("\nComparacion con operador condicional\n");
  
  (x>y)?printf("El numero mayor es: %6d\n",x):printf("El numero mayor es: %6d\n",y);
  system("pause");
  return 0; 
}

