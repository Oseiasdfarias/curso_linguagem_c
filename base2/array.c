#include <stdio.h>

int main(){

	/* O tamanho de um array deve ser sempre
	 * um valor ou expressão inteira e constante*/

	const int a = 3;
	int notas[a];
	notas[0] = 12;
	notas[1] = 42;
	notas[2] = 32;
	
	printf("Valor do array é\n");
	for (int i = 0; i < 3; i++){
		printf("%d ", notas[i]);
	}
	printf("\n");
	return 0;
}
