#include <stdio.h>
#include <stdlib.h>

int main(){

	int *p;
	p =  malloc(5 * sizeof(int));
	if (p == NULL){
		printf("Erro: Sem Memória!\n");
		exit(1); // termina o programa
	}

	int i, j;

	printf("\n");
	for (i = 0; i < 5; i++){
		printf("%d\n", i);
	 	p[i] = i;
	}
	
	printf("\n");
	for (j = 0; j < 5; j++){
		printf("Endereço %p, valor %d\n", &p[j], p[j]);

	}
	
	printf("\n");

	// Liberando a memória alocada
	free(p);

	return 0;
}
