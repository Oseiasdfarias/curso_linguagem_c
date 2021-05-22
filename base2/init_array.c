#include <stdio.h>

int main(){
	int i, j;
	int barray[4] = {2, 43, 43, 3};
	int array[2][4] = {2, 4, 4, 3, 3, 4, 4, 4};
	int aarray[3][4] = {{2, 4, 4, 3}, {3, 4, 4, 4}, {2, 6, 7, 3}};

	printf("\n");
	for (i = 0; i < 4; i++){
			printf("%d ", barray[i]);
		}
	printf("\n");
	printf("\n");

	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
				printf("%d ", array[i][j]);
		}
		printf("\n");
	}	
	printf("\n");

	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("%d ", aarray[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;

}
