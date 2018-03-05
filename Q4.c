#include <stdio.h>
#include <string.h>

int main(void){
	char palavra[20];
	int i, j, tamanho;

	printf("Digite uma palavra: \n");
	fgets(palavra, 20, stdin);

	tamanho = strlen(palavra);

	for(i = 0; i < tamanho - 1; i++){
		for(j = 0; j <= i; j++){
			printf("%c", palavra[j]);
		}
		printf("\n");
	}



	return 0;
}