#include <stdio.h>

int main(){

	int i = 0, j = 0;
	int mat[10][5];

	for (i = 0; i < 10; i++){
		for (j = 0; j < 5; j++){
			mat[i][j] = -j+5;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
