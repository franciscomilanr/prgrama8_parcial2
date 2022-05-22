/* 
Autor: Franciscomilan
Realizado: 04/04/22
Escuela: Universidad UVM
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 8 del parcial 2 en C que guarda los datos de un solo alumno por medio de una estructura
para la materia programacion estructurada.
*/

//Librerias
#include<stdio.h>
#include<string.h>
//Variables globales
//Estructura alumno
struct alumno {
	char nombre[30];
	float promedio;
	int faltas;
};

//Principal
int main() {
	//Variables
	struct alumno a1, a2; 
	//Entrada de datos
	printf(" Introduce el nombre: ");
	fgets(a1.nombre, 30, stdin);  
	a1.nombre[strlen(a1.nombre)-1]=0; 
	fflush(stdin); 
	if (a1.nombre[strlen(a1.nombre)-1] == '\n') {
	    a1.nombre[strlen(a1.nombre)-1]=0;
	} 
	//Entrada de datos
	printf(" Introduce el promedio: "); 
	scanf("%f", &a1.promedio);
	printf(" Introduce las faltas :");
	scanf("%d",&a1.faltas);
	//Pasar datos a una estructura
	a2=a1; 
	//Salida
	printf("\n Datos del alumno: \n");
	printf(" Nombre: %s \n",a1.nombre);
	printf(" Promedio: %.1f \n", a1.promedio);
	printf(" Faltas: %d \n", a1.faltas);
	//Retorno
	return 0;
}

