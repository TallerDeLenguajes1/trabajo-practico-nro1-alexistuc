//primer programa en C
//bibliotecas
#include <conio.h>
#include <stdio.h>
//programa principal
int main(){
	int variable = 777;
	int *puntero_a_variable1;
	int *puntero_a_variable2;
	int *puntero_a_variable3;

	puntero_a_variable1 = &variable;
	puntero_a_variable2 = &variable;
	puntero_a_variable3 = &variable;

	printf("la direccion de memoria del 1er puntero es: %p\n", &puntero_a_variable1 );
	printf("el primer puntero apunta hacia la direccion de memoria: %p\n", puntero_a_variable1 );
	printf("su valor es: %d\n\n",*puntero_a_variable1 );	
	printf("la direccion de memoria del 2do puntero es: %p\n", &puntero_a_variable2 );
	printf("el primer segundo puntero apunta hacia la direccion de memoria: %p\n", puntero_a_variable2 );
	printf("su valor es: %d\n\n",*puntero_a_variable2 );	
	printf("la direccion de memoria del 3er puntero es: %p\n", *puntero_a_variable3 );
	printf("el tercer puntero apunta hacia la direccion de memoria: %p\n", puntero_a_variable3 );
	printf("su valor es: %d\n",*puntero_a_variable3 );	
//2da forma de hacerlo
	printf("----------------\notra forma:");

	printf("la direccion de memoria del 1er puntero es: %p\n", &puntero_a_variable1 );
	printf("el primer puntero tiene direccion de memoria: %p\n", *puntero_a_variable1 );
	printf("su valor es: %d\n\n",*puntero_a_variable1 );	
	printf("la direccion de memoria del 2do puntero es: %p\n", &puntero_a_variable2 );
	printf("el primer puntero tiene direccion de memoria: %p\n", *puntero_a_variable2 );
	printf("su valor es: %d\n\n",*puntero_a_variable2 );	
	printf("la direccion de memoria del 3er puntero es: %p\n", &puntero_a_variable3 );
	printf("el primer puntero tiene direccion de memoria: %p\n", *puntero_a_variable3 );
	printf("su valor es: %d\n",*puntero_a_variable3 );	


	/*
	2 formas de motrar los punteros
	printf("%p\n", &variable);
	printf("%p\n", puntero_a_variable1);
	printf("%d\n",variable );
	printf("%d\n", *puntero_a_variable1);*/
	return 0;
}
