#include <stdio.h>

int main(){
	int j, i, soma = 0;
	int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	printf("Matrix: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matrix[i][j]);
			soma = soma + matrix[i][j];
		}
		printf("\n");
	}
	printf("Somatório da Matrix: %d\n", soma);
	return 0;
}
