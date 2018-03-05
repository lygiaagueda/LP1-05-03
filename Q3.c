#include <stdio.h>
#include <string.h>

int main(void){
	char palavra[50];
	int i, tamanho, count = 0;

	printf("Digite uma palavra: \n");
	fgets(palavra, 50, stdin);

	tamanho = strlen(palavra);

	for(i = tamanho - 1; i > 0; i--){
		palavra[i-1] = toupper(palavra[i-1]);
	}

	for(i = tamanho - 1; i > 0; i--){
		if(palavra[i - 1] != palavra [count]){
			printf("Nao eh palindromo\n");
			return 1;
		}
		count++;
	}

	printf("Eh palindromo\n");


	return 0;
}


