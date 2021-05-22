#include <stdio.h>

void inverte(int *x, int *y){
	int z = *x;
	*x = *y;
	*y = z;
}

int main(){
	int x = 4, y = 6;
	printf("Valor antes de x = %d\n", x);
	printf("Valor antes de y = %d\n", y);
	
	inverte(&x, &y);
	printf("Valor novo de x = %d\n", x);
	printf("Valor novo de y = %d\n", y);

	return 0;
}
