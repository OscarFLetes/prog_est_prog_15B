/*Autor Oscar Eduardo FLetes Ixta, creado 21/02/22
	programa que ejemplifica todas las opciones que me da el ciclo for
	Programa en lenguaje c que muestra el uso de scanf, y el uso del ciclo for
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-scanf
		-Operaciones aritmeticas 
		-Uso del ciclo for
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, pedirlas por teclado, 
	usar el ciclo for, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa inicia el ciclo for, despues pide como entrada 1 variable de tipo float (valor del numero),
	El programa ejemplifica todas las opciones que me da el ciclo for.
	*/


#include<stdio.h>

int main(){
	//Variables
	float numero, suma=0;//variable con decimal
	for(int i=20;i>=1;i--){//ciclo for
		//Entrada
		printf("Introduce el valor numero %d: ",i);//imrpime mensaje
		scanf("%f",&numero);//lee el numero insertado por el teclado
		//Proceso
		suma+=numero;//Ecuacion
	}
	//Salida
	printf("La suma es %.2f",suma);//imrpime la salida de la suma
	return 0;
}


//i++ incrementa de 1 en 1
//i+2 incrementa de 2 en 2
//i-- decrementa 1
//suma=suma+numero==suma+=numero
