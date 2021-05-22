#include <stdio.h>

int main(){
	char name;
	int inteiro;
	float fl;
	double db;

	printf("Digite uma Letra: \n");
	scanf("%c", &name);
	printf("Digite um numero inteiro: \n");
	scanf("%d", &inteiro);
	printf("Digite um número de ponto flutuante: \n");
	scanf("%f", &fl);
	printf("Digite um número em notação cientìfica: \n");
	scanf("%lf", &db);
	
	printf("\n");
	printf("\nLetra digitada foi: %c", name);
	printf("\nNúmero int digitada foi: %d", inteiro);
	printf("\nNúmero float digitada foi: %f", fl);
	printf("\nNúmero doable digitada foi: %lf\n", db);

	return 0;
}
