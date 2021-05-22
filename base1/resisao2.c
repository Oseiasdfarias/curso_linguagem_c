#include <stdio.h>

int main(){
	// OPeradores Relacionais
	int a, b;
	printf("Digite dois valores inteiros:\n");
	scanf ("%d %d", &a, &b);
	
	if ((a > b) && !(a < b)){
		printf("%d é maior que %d\n", a, b);
	
	}else{	
		if ((a==b) && !((a > b))){
			printf("%d é igual a %d\n", a, b);
	
		}else{
			printf("%d é menor que %d\n", a, b);
	
		}
	}

		return 0;
}
