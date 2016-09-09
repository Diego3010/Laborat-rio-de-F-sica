#include <stdio.h>
#include <math.h>

int main (void){

	int n, i;
	double m[10], soma=0, media = 0, desvio_padrao, fundo_de_escala, variacao, erro_total, erro_sistematico;

	printf("Digite a quantidade de medidas realizadas: \n");
	scanf ("%d", &n);

	for (i=0; i<n; i++){

		printf("\n digite o %d o valor: ", i+1);
		scanf ("%lf", &m[i]);

	}


	for(i=0; i<n; i++){
		soma = soma + m[i];
	}

	media = soma / n;


	printf("\nA média dos valores apresentados é: %lf \n", media);

	soma = 0;

	for(i=0; i<n; i++){
		variacao = media - m[i];
		variacao = pow(variacao, 2);
		soma = soma + variacao;
	}

	soma = soma / n;

	desvio_padrao = sqrt(soma);

	printf("\nO desvio padrao dos valores apresentados é: %lf\n", desvio_padrao);

	printf("\nDigite o fundo de escala\n");
	scanf("%lf", &fundo_de_escala);

	erro_sistematico = fundo_de_escala / 2;

	erro_total = sqrt(pow(desvio_padrao, 2) + pow(erro_sistematico, 2));

	printf("\nO erro total é: %lf\n", erro_total);
	printf("\nO intervalo das medidas é entre %lf e %lf .\n", media + erro_total, media - erro_total);

	
}