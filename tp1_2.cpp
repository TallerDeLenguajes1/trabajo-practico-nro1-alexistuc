//BIBLIOTECAS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//prototipos
int cuadradoDeUnNumero(int x);
void cuadradoConfuncionDeTipoVoid(int *numero);
void invertirValores(int *num1, int *num2);
void ordenar(int *num1, int *num2);
void ordenEntradas(int *num1, int *num2);
//funcion principal
void main()
{
	/* code */
	//variables
	int unNumero = 8, valor1 = 6, valor2 = 9, parametro1 = 10, parametro2 = 20;
	int cuadrado;
	int entrada1 = 0, entrada2 = 0; 
	//ejercicio i)
	cuadrado = cuadradoDeUnNumero(unNumero);
	printf("el cuadrado del numero es: %d\n",cuadrado);
	//ejercicio ii)
	cuadradoConfuncionDeTipoVoid(&unNumero);
	//ejercicio iv)
	printf("antes de invertir, el primer valor es: %d y el segundo valor es: %d \n", valor1,valor2);
	printf("sus direcciones de memoria son, el primero: %p y el segundo: %p.\n", &valor1, &valor2);
	invertirValores(&valor1, &valor2);
	//ejercicio v)
	printf("los numeros sin ordenar son:\nel primer numero es: %d\nel segundo numero es:%d\n",parametro1,parametro2 );
	ordenar(&parametro1, &parametro2);
	//ejercicio vi)
	printf("ingrese un numero:\n");
	scanf("%d",&entrada1);
	printf("ingrese otro numero:\n");
	scanf("%d",&entrada2);
	ordenar(&entrada1,&entrada2);
}
//funciones auxiliares
int cuadradoDeUnNumero(int x){
	int aux;
	aux = (x * x);
	return aux;
}
void cuadradoConfuncionDeTipoVoid(int *numero){
	int aux = *numero;
	aux = aux*aux ;
	printf("el cuadrado del numero %d con una funcion del tipo void es: %d\n", *numero, aux);
	//ejercicio 3
	printf("La dirección de memoria de la variable es: %p\n", numero);
}
void invertirValores(int *num1,int *num2){
	int aux;
	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
	printf("los valores invertidos son, el primero: %d y el segundo: %d.\n", *num1, *num2);
	printf("sus direcciones de memoria son, el primero: %p y el segundo: %p.\n", num1, num2);
}
void ordenar(int *num1, int *num2){
	if (*num1 < *num2)
	{
		printf("los numeros ordenados son:\nel mayor es: %d.\nel menor es: %d.\n",*num2, *num1);
	}
	else{
		printf("los numeros ordenados son:\nel mayor es: %d.\nel menor es: %d.\n",*num1, *num2);
	}
}
/*
void ordenEntradas(int *num1, int *num2){
	ordenar(num1, num2);
}*/
/*EJERCICIO 2
i) Haga una función que devuelva el cuadrado de un número
ii) Haga la función anterior, pero devolviendo un tipo void
iii) Al recibir una variable muestre por pantalla la dirección y el contenido de la
variable
iv) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la variable b y en b
el valor de a
v) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada,
en el primer parámetro el menor y en el segundo el mayor.
vi) Utilice la función anterior para leer pares de valores e imprimirlos por pantalla de forma ordenada.
*/