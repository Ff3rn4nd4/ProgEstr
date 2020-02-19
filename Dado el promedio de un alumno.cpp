/*Dado un promedio de un estudiante deterimine algunos de estos casos
Si prom=10 imprimir "Excelente"
Si prom= 9,8 imprimir "Muy bien"
Si prom= 7 imprimir "Bien"
Si prom= 6,5,4,3,2,1,0 imprimir "reprueba" 
11/02/2020 */

#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main()
{
	int prom,promedio;
	char nombre[100],genero;
	long matricula;
	
	
	//Entrada de Datos 
	
	puts("Ingrese el nombre del estudiante \n");
	gets(nombre);
	puts("\nIngrese la matricula del estudiante \n");
	scanf("%ld",&matricula);
	puts ("\nIngrese el genero del estudiante \nM para masculino\nF para femenino");
	genero=getche();
	printf ("\nIngrese el promedio del alumno entre 100 y 0 \n");
	scanf ("%d",&promedio);
	
	//Operacion
	
	prom=promedio/10;
	
	//Salida de datos 
	
	printf("\nNombre: %s\nMatricula: %ld\nGenero:%c \n", nombre,matricula,genero);
	
	//Swicht
	
	switch (prom)
	{
		case 10: puts ("Excelente"); break;
		case 9: 
		case 8: puts ("Muy bien"); break;
		case 7: puts("Bien"); break;
		case 6:  
		case 5: 
		case 4: 
		case 3: 
		case 2: 
		case 1: 
		case 0: puts ("Reprobado"); break;
		default: puts ("Promedio no valido");
	}
	
	//Fin de switch 
		
	system ("pause");
	return 0;
	
}
