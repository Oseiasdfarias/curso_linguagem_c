#include <stdio.h>

void print_array3d(int x[][3][3], int m){

	int i, j, k;
	printf("\n");
	for (i = 0; i < m; i++){
		for (j = 0; j < 3; j++){
			for (k = 0; k < 3; k++){
				printf("%d   ", x[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n");
}

void print_array3d_(int x[][2][3], int m){

	printf("\n");
	int i, j, k;
	for (i = 0; i < m; i++){
		for (j = 0; j < 2; j++){
			for (k = 0; k < 3; k++){
				printf("%d   ", x[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n");
}

int main(){

	// passagem de array como parâmetro de uma função
	// Obs: arrays sempre é passado por referência para uma
	// função, para evitar copias desnecessárias

	int x[2][2][3] = {{{2, 3, 4}, {4, 3, 4}},
										{{2, 3, 2}, {4, 3, 5}}};

	int y[3][3][3] = {{{2, 3, 4}, {4, 3, 2},{3, 2, 4}},
										{{2, 3, 4}, {4, 3, 2}, {3, 2, 4}},
										{{2, 3, 4}, {4, 3, 2}, {3, 2, 4}}};

	printf("Matrix 2D: \n");
	print_array3d_(x, 2);
	
	printf("Matrix 3D: \n");
	print_array3d(y, 3);

	return 0;
}
