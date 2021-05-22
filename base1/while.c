#include <stdio.h>

int main(){
	int a, b;
	printf("Digite dois valores inteiro");
	printf("\nsendo o primeiro maior que o segundo: ");
	scanf("%d %d", &a, &b);

	while (a > b){
		printf("%d\n", a);
		a--;
	}

	return 0;
}
