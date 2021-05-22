#include <stdio.h>

int main(){
	/* Atribuição: um ponteiro só pode receber o endereço de uma variável
	 * do mesmo tipo do ponteiro*/
	int *p, *p1, x = 10;
	float *z, *e, s = 10.0, y = 20.0;

	p = &x;
	printf("\n*p: %d\n", *p);
	printf("x: %d\n\n", x);
	p1 = p;

	if (p1 == p){
		printf("[p1] aponta para o mesmo endereço de memória que [p]!\n");
	}else{
		printf("[p1] e [p] apontam para endereços de memórias diferentes!\n");
	}

	printf("p1: %p\n", p1);
	printf("p: %p\n\n", p);
	z = &y; 
	e = &s;

	if (e == z){
		printf("[p1] aponta para o mesmo endereço de memória que [e]!\n");
	}else{
		printf("p1 e [e] apontam para endereços de memórias diferentes!\n");
	}

	printf("s: %f\n", s);
	printf("*e: %f\n\n", *e);

	printf("*z: %f\n", *z);
	printf("y: %f\n\n", y);

	return 0;
}
