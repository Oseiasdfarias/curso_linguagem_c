#include <stdio.h>

int main(){
	/* Ponteiro genérico */
	void *pp;
	int *p1, p2 = 32;

	p1 = &p2;
	pp = &p2; // Endereço de int
	printf("Endereço em pp: %p\n", pp);
	printf("Endereço em p1: %p\n\n", p1);
	printf("Conteudo pp: %d\n", *(int*)pp);
	printf("Conteudo p1: %d\n\n", *p1);

	pp = &p1; // Endereço de int*
	printf("Endereço em pp: %p\n", pp);
	printf("Endereço de p1: %p\n\n", &p1);
	printf("Conteudo pp: %d\n", *(int*)pp);
	printf("Conteudo p1: %d\n\n", *p1);


	pp = p1; // Endereço de int
	printf("Endereço em pp: %p\n", pp);
	printf("Endereço de p1: %p\n\n", &p2);

	return 0;
}
