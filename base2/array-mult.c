#include <stdio.h>

int main(){
	int cub[5][5][5];
	int i, j, k, c;

	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			for (k = 0; k < 5; k++){
				cub[i][j][k] = c;
				printf("%d ", cub[i][j][k]);

			}
			printf("\n");
		}
			c++;
			printf("\n");
	}
	return 0;
}
