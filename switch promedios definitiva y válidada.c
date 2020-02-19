/* EJERCICIO DEL PROMEDIO (Switch))
21 DE ENERO DEL 2020*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Declaración de variables
	
	int prom,promedio;
	long matricula;
	char nombre[40],genero[2];
	
	// Entrada de datos
	
	puts("ingrese su nombre \n\n");
	gets(nombre);
	puts("ingrese su matricula \n\n");
	scanf("%ld",&matricula);
	puts("ingrese su genero:\n F para femenino \n M para masulino \n\n");
	scanf("%S",&genero);
	puts("ingrese su promedio \n\n");
	scanf("%d",&prom);
	
	// Procedimiento para convertir a escala 10
	promedio=prom/10;
	
	//salida de datos
	
	printf("Nombre:%s\n\n",nombre);
	printf("Matricula:%ld\n\n",matricula);
	printf("Género:%s\n\n",genero);
	
	// Switch
	
if((prom<=100) && (prom>=0))	
	switch (promedio)
	{
		case 10: printf("Excelente\n\n");
				break;
		case 9: printf("muy bien\n\n");
				break;
		case 8:printf("muy bien\n\n");
				break;
		case 7: printf("bien\n\n");
				break;
		case 6: 
				
		case 5: 
				
		case 4: 
				
		case 3: 
				
		case 2: 
				
		case 1: 
		
		case 0: printf("reprobado\n\n");
				break;			
	}
	else printf("\n Numero invalido chavo\n");
	
	system("pause");
	return 0;

}

