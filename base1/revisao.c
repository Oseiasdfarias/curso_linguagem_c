#include <stdio.h>

#define E 45

int main(){

	// Declaração de variáveis em c
	// Uma variável pode ser declarada e inicializada ou
	// apenas declarada para ser inicializada posteriormente no código

	int a, b = 23, c = 1, d;
	char e = 'a', f = 's';
	float g, h = 12.34, i = 23.454;
	double j, k = 12e2, l = 23e34;

	// Usando a função printf para mostrar os dados no Terninal
	printf("Digite um valor inteiro para a variável a: ");

	// Usando a função scanf para obter dados do teclado
	scanf("%d", &a);

	printf("Digite um valor inteiro para a variável d: ");
	scanf("%d", &d);

	// Fazendo operações aritiméticas com tipos numéricos e mostrando no console
	int	ab = a + b;
	float hi = h + i;
	double kl = k + l;

	printf("%d + %d = %d\n", a, b, ab);
	printf("%f + %f = %f\n", h, i, hi);
	printf("%lf + %lf = %lf\n", k, l, kl);

	// Definindo constantes 
	printf("Printando uma constante: %d\n", E);
	const int ct = 34;
	printf("Printando outra constante: %d\n", ct);
	
	// Pré e Pós Encremento
	printf("Encrementos\n\n");
	d++;
	printf("%d\n", d);
	d--;
	printf("%d\n", d);
	--d;
	printf("%d\n", d);
	++d;
	printf("%d\n", d);

	// Pré encremento, primeiro eu executo o cálculo de encremento e depois eu
	// atribuo o valor a variável m
	int	m = --d;
	printf("Pré encremento: %d\n", m);
	// Pós encremento, primeiramente eu atribuo o valor da variável "d" a "m" e 
	// só depois eu encremento o valor de d
	int n = d--;
	printf("Pós Encremento: %d\n", d);
	printf("Pós Encremento: %d\n", n);

	return 0;
}
