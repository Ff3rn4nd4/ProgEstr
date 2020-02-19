/* Ejemplo promedios de clase (11-02-20)*/

#include <stdio.h>
#include <stdlib.h>

int main (){

	//declarar variables
	int gene,matri, nomb;
	
	//nombre
	printf("Ingrese su nombre:");
	scanf("%c,&nomb");
	//matricula
	printf("\n\n\nIngrese su matricula:");
	scanf("%c,&matri");
	//genero
	printf("\n\n\nIngrese su genero (M/F):");
	scanf("%c,&gene");
	//promedio
	int prom,p;
	printf("\n\n\nIngrese su promedio:");
	scanf("%d,&prom");
	//para convertirlo en escala 10
	p=prom/10;
	printf("%d/10=%d\n", prom, prom/10);
	
	
	system("pause");
	return 0;

}


