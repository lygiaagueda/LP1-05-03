#include <stdio.h>

int main(void){
	double salarioBruto, salarioLiquido;

	printf("Digite o valor de seu salario bruto: ");
	scanf("%lf", &salarioBruto);

	if(salarioBruto <= 420){
		salarioLiquido = salarioBruto - salarioBruto * 0.08;
	} else if(salarioBruto > 420 && salarioBruto <= 1350){
		salarioLiquido = salarioBruto - salarioBruto * 0.09;
	}else{
		salarioLiquido = salarioBruto - salarioBruto * 0.1;
	}

	printf("Seu salario liquido é: %.2lf\n", salarioLiquido);

	return 0;
}