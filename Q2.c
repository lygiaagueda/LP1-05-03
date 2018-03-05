#include <stdio.h>


int main(void){
 	int fibonacci = 1, anterior = 1, anteAnterior = 0, i;

 	for(i=0; i < 6; i++){
 		printf("%d ", fibonacci);
 		fibonacci = anteAnterior + anterior;
 		anteAnterior = anterior;
 		anterior = fibonacci;
 		//anteAnterior = 
 	}

	return 0;
}