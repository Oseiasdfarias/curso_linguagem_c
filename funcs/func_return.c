#include <stdio.h>

int maior(int x, int y){
	if (x > y)
		return x;
	else
		return y;
}

int main(){

	int x, y, z;
	printf("Digite um número Inteiro: \n");
	scanf("%d", &x);
	printf("Digite outro número Inteiro: \n");
	scanf("%d", &y);
	
	z = maior(x, y); 
	if (z == x)
		printf("\n%d é maior que %d\n\n", z, y);
	else
		printf("\n%d é maior que %d\n\n", z, x);

	return 0;
}
