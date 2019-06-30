/*  Elabore un programa que contenga tres funciones que realicen las siguientes tareas:
a) Area de un triangulo 
b) Area de un circulo 
c) Area de una esfera. 
Para los tres casos se debe ingresar los datos necesarios para cada calculo.
El programa sera repetitivo mientras el usuario desee realizar calculos.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1416

//prototipo de la funcion
float area_circulo(float r);
float area_triangulo(float b, float h);
float area_esfera(float r);

char opcion;
float base,altura,radio,area;

main()
{
	do{
	
	printf("\n\n *** MENU GEOMETRICO 2 ***");
	printf("\n\n1.  Area triangulo");
	printf("\n2.  Area circulo");
	printf("\n3.  Area de la Esfera");
	printf("\n4.  Salir");
	printf("\n\n Ingrese la opcion:  ");
	opcion=getchar();
	switch(opcion)
	{
		case '1': 	printf("\n Ingrese la base ");
					scanf("%f",&base);
					printf("\n Ingrese la altura ");
					scanf("%f",&altura);
					area=area_triangulo(base,altura);
					printf("\n El area del triangulo es %.2f  //",area);
					break;
		case '2':	printf("\n Ingrese el radio ");
					scanf("%f",&radio);
					area=area_circulo(radio);
					printf("\n El area del circulo es %.2f  //",area);
					break;
		case '3':	printf("\n Ingrese el radio ");
					scanf("%f",&radio);
					printf("\n El area de la esfera es %.2f  //", area_esfera(radio));
					break;	
		case '4':   exit(0);
		default:	printf("\n OPCION INVALIDA. intente otra vez:");
				
	}// cierra switch
	getchar();
}while(opcion!='4');
}//cierra main

float area_triangulo(float b, float h)
{
	float a;
	a=(b*h)/2;
	return(a);	
}
float area_circulo(float r)
{
	float a;
	a=PI*pow(r,2);
	return(a);	
}

float area_esfera(float r)
{
	float a;
	a=4*PI*pow(r,2);
	return(a);
}


