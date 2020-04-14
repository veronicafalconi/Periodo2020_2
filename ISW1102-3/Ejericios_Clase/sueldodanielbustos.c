/* elaborar un programa que calcule un sueldo en base a diferentes casos 
datos de entrada 
enteros  */
#include <stdio.h>

void main(){
	int op,edad,genero,horas,tiempo;
	float sueldo,prueba;
	printf("\t Bienvenido \n");
	printf(" Ingreses el tipo de trabajador \n 1.Trabajador de empresa \n 2.Aspirante a trabajador \n Escoga una opcion :");
	scanf("%d",&op);
	if(op==1){
		printf("\t Trabajador de empresa \n");
		printf(" ingrese su sueldo : ");
		scanf("%f",&sueldo);
		printf("\n ingrese su Genero 1. Mujer y 2. Hombre su genero es :");
		scanf("%d",&genero);
		printf(" ingrese su edad : ");
		scanf("%f",&edad);
		printf(" ingrese su tiempo en la emmpresa en años(solo enteros) : ");
		scanf("%d",&tiempo);
		printf(" ingrese horas trabajadas (solo enteros) : ");
		scanf("%d",&horas);
	
		 if(genero==1){
			sueldo=sueldo+800;
			printf(" su sueldo es: %.2f  ",sueldo);
		}
		else if(edad>=25 && tiempo>=30){
			sueldo=sueldo+800;
			printf(" su sueldo es: %.2f  ",sueldo);
		}
		else if(horas>40 && genero!=1 ){
			sueldo=sueldo+50;
			printf(" su sueldo es: %.2f  ",sueldo);
		}
		else{
			sueldo=sueldo+100;
			printf(" su sueldo es: %.2f  ",sueldo);
		}
		
	}
	else if(op==2){
		printf("\t Aspirante a trabajador \n");
		printf(" ingrese su edad : ");
		scanf("%f",&edad);
		printf(" ingrese su puntuacion en la prueba : ");
		scanf("%f",&prueba);
		if (edad > 18 && prueba >85){
			printf(" El aspitrante es contratado ");	
		}
		else{
			printf(" El aspitrante no es contratado por que no cumple los requisitos ");
		}
	
	}
}

