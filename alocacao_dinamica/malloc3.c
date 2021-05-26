#include <stdio.h>
#include <stdlib.h>

int main(){

	float *fl;
	fl = malloc(5 * sizeof(float));
	if (fl == NULL){
		printf("Erro: Sem Memória!!!");
		exit(1);
	}

	int i, j;
	for (i = 0; i < 5; i++){
		printf("Digite um número float: \n");
		scanf("%f", &fl[i]);
	}

	printf("\n");
	for (j = 0; j < 5; j++){
		printf("float posição fl[%d], End: %p N: %f\n", j, &fl[j], fl[j]);
	}

	printf("\n");

	return 0;
}
