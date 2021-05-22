#include <stdio.h>

int soma(int, int); // prótotipo da função soma 
int quad(int); // prótotipo da função quad

int main(){
	int x, y, z, v;
	printf("\nDigite um numero: ");
	scanf("%d", &x);
	printf("Digite outro numero: ");
	scanf("%d", &z);

	y = quad(x);
	printf("\n%d ao quadrado é %d\n", x, y);

	v = soma(x, z);
	printf("A soma de %d + %d é %d\n\n", x, z, v);

	return 0;
}

int soma(int a, int b){
	return a + b;
}

int quad(int a){
	return a * a;
}
