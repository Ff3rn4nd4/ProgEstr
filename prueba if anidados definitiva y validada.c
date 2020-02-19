/* EJERCICIO DEL PROMEDIO (IF ANIDADOS)
21 DE ENERO DEL 2020*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Declaración de variables
	
	int prom,promedio;
	long matricula;
	char nombre[40],genero[5];
	
	// Entrada de datos
	
	puts("ingrese su nombre \n\n");
	gets(nombre);
	puts("ingrese su matricula \n\n");
	scanf("%ld",&matricula);
	puts("ingrese su genero:\n F para femenino \n M para masulino \n\n");
	scanf("%S",&genero);
	puts("\ningrese su promedio \n\n");
	scanf("%d",&prom);
	

	
	
	//salida de datos
	
	printf("\nNombre:%s\n\n",nombre);
	printf("Matricula:%ld \n\n",matricula);
	printf("Genero:%s\n\n",genero);
		// Procedimiento para convertir a escala 10

	if((prom<=100) && (prom>=0))
		
	{
		promedio=prom/10;
		if(promedio==10)
	
			printf("Excelente\n\n");
		
		else if((promedio<=9) || (promedio>=8))
		
			printf("muy bien\n\n");
			
			else if((promedio>=7) || (promedio<=8))
			
				printf("bien\n\n");
				
			else if((promedio<=6)  || (promedio>=0))
				
					printf("reprobado\n\n");
	
	}	
		
	else 	printf("hijole numero invalido chavo\n\n");
	system("pause");
	return 0;
	
	
}
