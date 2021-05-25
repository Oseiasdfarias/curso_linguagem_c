#include <stdio.h>

int main(){
/* Também podemos declarar um 
 * array de ponteiros */

// array contendo 5 ponteiros
	int *vet[5]; int i, j;
	
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("%p\n", vet[i]);
	
	}

	printf("\n");
	int array[5] = {1, 2, 3, 4, 5};

	for (j = 0; j < 5; j++){
		vet[j] = &array[j];
		printf("vet valor: %d End: %p | ", *vet[j], vet[j]);
		printf("array valor: %d End: %p\n", array[j], &array[j]);
	}

	printf("\n");
	return 0;

}
