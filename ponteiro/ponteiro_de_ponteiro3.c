#include <stdio.h>

int main(){
	/* A linguagem C permite criar ponteiros com diferentes
	 * níveis de apontamento: POnteiros que apontam para outros
	 * ponteiros */
	int x = 23;
	int *p = &x;
	int **p2 = &p;
	int ***p3 = &p2;

	// Imprime o Endereço de *p que p2 armazena
	printf("\nx: %d\n", x);
	printf("*p: %d\n", *p);
	printf("**p2: %d\n", **p2);
	printf("***p3: %d\n\n", ***p3);

	return 0;

}
