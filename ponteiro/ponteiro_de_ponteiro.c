#include <stdio.h>

int main(){
	/* A linguagem C permite criar ponteiros com diferentes
	 * níveis de apontamento: POnteiros que apontam para outros
	 * ponteiros */
	int x = 23;
	int *p = &x;
	int **p2 = &p;

	// Endereço em p2
	printf("\n");
	printf("End P2: %p\n", p2);// &p
	printf("End  x: %p\n\n", &p);// &p

	// Conteúdo do endereço em p2
	printf("Cont do End *P2: %p\n", *p2);// &x
	printf("End de        x: %p\n", &x);// &x

	// Conteúdo do endereço do endereço
	printf("\n");
	printf("Cont do End do End em **P2: %d\n", **p2);// x
		printf("Cont em                  x: %d\n", x);// x

	printf("\n");
	return 0;
}
