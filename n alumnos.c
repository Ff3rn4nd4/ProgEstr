//Ejercicio 2 11/02/2020
/*Programa que dado el promedio de un estudiante determine si su promedio es igual a 10, igual a 9 y 8, igial a 7 e igual a 6, menor a 6 e igual
a 0; tambien dara por entrada el nombre, la matricula y el genero, para mostrarlo al final por pantalla con switch 
para n alumnos con ciclo do-while*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	char nombre[50], genero, opcion;
	long int matricula;
	int prom, prom1;
	do
	{
	 	printf("\n\tIngrese el nombre del alumno:");
	 	fflush(stdin);
	 	gets(nombre);	
	
	 	//Validacion de matricula
		do
		{
			printf("\n\tIngrese la matricula del alumno:");
	  		fflush(stdin);
	  		scanf("%ld", &matricula);	
	  		if(matricula<=0 )
	 			puts("\n\tLa matricula tiene que ser mayor a 0");
		}while(matricula<=0);
		//Validacion del genero
		do
		{
			printf("\n\tIngrese el genero del alumno: M o F:");
	    	fflush(stdin);
	    	scanf("%c", &genero);	
	    	if( genero!='M'&& genero!='F')
	 			puts("\n\tEl genero es M= Masculino F= Femenino");
		
		}while(genero!='M'&& genero!='F');
		//Validacion del promedio
		do
		{
	 		printf("\n\tIngrese el promedio del alumno: del 100 al 0 ");
	 		fflush(stdin);
	 		scanf("%d", &prom);
	 		if(prom<0 || prom>100)
	 			puts("\n\tEl promedio es entre 0 y 100");
	 
		}while(prom<0 || prom>100);
		//convercion del promedio
    	prom1=prom/10;	
    	
		printf("\n\tNombre: %s", nombre);
		printf("\n\tMatricula: %ld", matricula);
		printf("\n\tGenero: %c", genero);	
    
		switch(prom1)
		{
			case 0:	
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:	
		      		printf("\n\tReprobado\n\n\n");
					break;
			case 7:
					printf("\n\tBien\n\n\n");
					break;
		  	case 8:
	      	case 9:	
		      		printf("\n\tMuy bien\n\n\n");
			 		break;
			case 10: 
					printf("\n\tExelente\n\n\n");
					break;
		
 
		} //Cierre del switch
		do{
			puts("\n\tOprima C para continuar y T para terminar:");
			opcion=getche();
		} while(opcion!='C' && opcion!='T');
		
	}while(opcion=='C');
	system("pause");
	return 0;
}
