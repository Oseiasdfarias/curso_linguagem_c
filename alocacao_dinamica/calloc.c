#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float *p0;
	int *p, *p1;
	p0 = calloc(5, sizeof(float));
	p = malloc(5 * sizeof(int));
	p1 = calloc(5, sizeof(int));

	printf("\nMalloc int \t\t\t\t Calloc fl \t\t\t\t Calloc int\n"); 
	for (i = 0; i < 5; i++){
		printf("malloc | Dado p[%p]: %d", &p[i], p[i]);
		printf(" / Calloc | Dado p0[%p]: %f", &p0[i], p0[i]);
		printf(" / calloc | Dado p1[%p]: %d\n", &p1[i], p1[i]);
	}

	printf("\n");

	return 0;
}
