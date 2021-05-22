#include <stdio.h>

int main(){

	int valor, var;
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor);
/*	
	var = valor >= 0 ? 1 : 0;
	if (var == 1)
		printf("valor de var é maior ou igual a zero!\n");
	else
	printf("valor de var é menor do que zero!\n");
*/
	(valor >= 0) ? printf("valor de var é maior ou igual a zero!\n")
								: printf("valor de var é menor do que zero!\n");
return 0;
	
}
