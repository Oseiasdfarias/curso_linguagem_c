#include <stdio.h>

int main(){
	/* Array: É um conjunto de dados
	 * armazenado de forma sequencial na memória */
	int vet[5] = {1, 2, 3, 4, 5};
	int *p = vet;
	int i;

	printf("\n");
	printf("Percorrendo todo o vetor usando um for!\n");

	for (i = 0; i < 5 ; i++){
		printf("Posição %i, valor: %d ", i, p[i]);
		printf("%d \n", *(p+i));
	}

	printf("\n\n");
	printf("Valor da posição 2 e 4 do vetor: \nP2 = %d\nP4 = %d\n\n", p[2], p[4]);
	printf("Valor da posição 0 e 3 do vetor: \nP0 = %d\nP3 = %d\n\n", *(p), *(p+3));

	printf("Endereço da posição 0 e 3 do vetor: \nEnd P0 = %p\nEnd P3 = %p\n\n", &p[0], &p[3]);
	printf("Endereço da posição 0 e 3 do vetor: \nEnd P0 = %p\nEnd P3 = %p\n\n", (p), (p+3));



	return 0;
}
