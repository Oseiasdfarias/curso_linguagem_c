#include <stdio.h>

int main(){
	int i, j;
	int matrix[3][2] = {{1, 3}, {54, 3}, {3, 23}};
	int maior = matrix[0][0];

	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){

			if (maior < matrix[i][j]){
				maior = matrix[i][j];

			}

		}
	}

	printf("\n%d é o maior valor da Matrix!\n\n", maior);

	return 0;
}
