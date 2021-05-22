#include <stdio.h>
void print_array3d(int x[][3], int m){

	int i, j;
	printf("\n");
	for (i = 0; i < m; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", x[i][j]);

		}
	printf("\n");
	}
	printf("\n");

}

void print_array2d(int x[][2], int m){

	printf("\n");
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < 2; j++){
			printf("%d ", x[i][j]);

		}
	printf("\n");
	}
	printf("\n");

}

int main(){

	// passagem de array como parâmetro de uma função
	// Obs: arrays sempre é passado por referência para uma
	// função, para evitar copias desnecessárias
	
	int x[2][2] = {{2, 3}, {4, 3}};
	int y[3][3] = {{2, 3, 4}, {4, 3, 2}, {3, 2, 4}};

	printf("Array 2D x: \n");
	print_array2d(x, 2);
	
	printf("Array 2D y: \n");
	print_array3d(y, 3);

	//printf("Array y: ");
	//print_array(y, 3);

	return 0;
}

