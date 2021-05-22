#include <stdio.h>

int main(){
	int a, b;
	printf("Digite dois valores inteiros: ");
	scanf("%d %d", &a, &b);
	
	do {
	printf("%d\n", a);
	a++;
	}while (a<b);

	printf("Final do programa!!!\n");

return 0;
}
