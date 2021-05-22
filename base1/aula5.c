#include <stdio.h>

int main(){
	// Comando de atribuição
	int valor = 23;
	int y = valor;
	y = valor + 10;

	printf("valor de y: %d\n", y);

	float f = 445.54;
	char fc = f;
	int fi = f;

	char letra = 's';
	int letrai = letra;
	float letraf = letra;

	int n = 12;
	char nc = n;
	float nf = n;
	printf("##########################################\n");
	printf("valor letra: %c\n", letra);
	printf("valor float da letra %c é %f\n",letra, letraf);
	printf("valor int da letra %c é %d\n",letra, letrai);

	printf("\n");

	printf("##########################################\n");
	printf("valor float: %f\n", f);
	printf("valor int do float %f é %d\n", f, fi);
	printf("valor do float %f na tabela ascii %c\n", f, fc);
	
	return 0;

}
