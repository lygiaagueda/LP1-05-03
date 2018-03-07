#include <stdio.h>

int main(void){
	int i, quantFem = 0, quantMasc = 0;
	double alturas[10], maiorAltura = 0, menorAltura = 0, mediaMasc = 0, mediaFem = 0;
	char sex[10];

	for(i= 0; i < 10; i++){
		printf("Digite a sexo da pessoa %d: \n", i);
		scanf(" %c", &sex[i]);
		printf("Digite a altura da pessoa %d: ", i);
		scanf("%lf", &alturas[i]);
	}

	for(i = 0; i < 10; i++){
		printf("alturas %lf sex %c \n", alturas[i], sex[i]);
		if(alturas[i] > maiorAltura){
			maiorAltura = alturas[i];
		}
		if(alturas[i] < menorAltura){
			menorAltura = alturas[i];
		}

		// media da altura
		if(sex[i] == 'f' || sex[i] == 'F'){
			quantFem++;
			mediaFem += alturas[i];
		}
		if(sex[i] == 'm' || sex[i] == 'M'){
			quantMasc++;
			mediaMasc += alturas[i];
		}
	}


	mediaMasc = mediaMasc / quantMasc;
	mediaFem = mediaFem / quantFem;

	printf("Media das alturas do sexo masculino: %.2lf\n", mediaMasc);
	printf("Media das alturas do sexo feminino: %.2lf\n", mediaFem);
	printf("Quantidade de pessoas do sexo masculino: %d\n", quantMasc);
	printf("Quantidade de pessoas do sexo feminino: %d\n", quantFem);

	return 0;
}