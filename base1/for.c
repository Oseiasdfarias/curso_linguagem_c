#include <stdio.h>

int main(){
	int a, b, c;

	printf("Digite dois numeros inteiro para configurar\no comando de repetição for: ");
	scanf("%d %d", &a, &b);

	for (c = a; b >= c; c++){
		printf("%d\n", c);
	}
	return 0;
}
