#include <stdio.h>

int main(){
	int a = 44, b =54;

	(a >= b) ? printf("%d é maior ou igual a %d\n", a, b)
					 : printf("%d é menor que %d\n", a, b);
	
	switch(a){
		case 54: printf("Valor = %d\n", a); break;
		case 3: printf("Valor = %d\n", a); break;
		case 44: printf("Valor = %d\n", a); break;
		case 43: printf("Valor = %d\n", a); break;
		case 13: printf("Valor = %d\n", a); break;
		case 93: printf("Valor = %d\n", a); break;
		default: printf("Valor não encontrado!!");
	}
	while (a < b){
		printf("%d\n", a);
		a++;
		if (a == 48){
			printf("Continue deixa de executar o final da condição\n");
			continue;
		
		}

	}
		return 0;
}
