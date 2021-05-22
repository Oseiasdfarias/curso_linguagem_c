#include <stdio.h>

void print_array(int *x, int m){

	int i;
	for (i = 0; i < m; i++){
		printf("%d ", x[i]);
	}
	printf("\n");

}

int main(){
	// passagem de array como parâmetro de uma função
	// Obs: arrays sempre é passado por referência para uma
	// função, para evitar copias desnecessárias
	
	int x[5] = {2, 3, 4, 3, 4}, y[3] = {3, 2, 4};
	printf("Array x: ");
	print_array(x, 5);
	printf("Array y: ");
	print_array(y, 3);

	return 0;
}
