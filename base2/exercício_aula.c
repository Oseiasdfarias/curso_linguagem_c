#include <stdio.h>
#define N 5

int main(){
	
	float notas[N], media = 0.0;
	int i;
	for (i = 0; i < N; i++){
		printf("Digite a nota do aluno: ");
		scanf("%f", &notas[i]);
		// Calculando a média das notas
		media = media + notas[i];
	}
	printf(" \n");

	media = media / N;
	printf("Média das notas: %f", media);
	printf(" \n");

	for (i = 0; i < N; i++){
		if (notas[i] > media){
			printf("O aluno %d, sua nota foi maior que a média, nota: %f\n", i, notas[i]);
		}
	}
	return 0;
}
