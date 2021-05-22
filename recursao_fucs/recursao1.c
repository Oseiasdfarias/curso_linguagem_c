#include <stdio.h>

int fat(int n){
	if (n == 0)
		return 1;
	else
		return n * fat(n-1);
}

int main(){

	int a;
	printf("Digite um número inteiro: \n");
	scanf("%d", &a);
	printf("\nFatorial de %d = %d\n", a, fat(a));
	
}
