#include <stdio.h>

int main(){
	// Fazendo um somatório de todos os 
	// valores contido em um array
	int soma = 0, i;
	int array[5] = {1, 2, 3, 4, 5};
	
	printf("Array: ");
	for(i = 0; i < 5; i++){
		printf("%d ", array[i]);
		soma = soma + array[i];

	}
	printf("\nO Somatório do array é %d\n", soma);
	return 0;
}
