#include <stdio.h>

int main(){
	/* A linguagem C permite criar ponteiros com diferentes
	 * níveis de apontamento: POnteiros que apontam para outros
	 * ponteiros */
	int x = 23;
	int *p = &x;
	int **p2 = &p;

	printf("\n");
	// Imprime o Endereço de *p que p2 armazena
	printf("End apontado por P2: %p\n", p2);
	printf("End de P: %p\n", &p);

	//Conteúdo de *p que é o endereço da variável x 	
	printf("\n");
	printf("Conteúdo de *p acessado via *p2: %p\n", *p2);
	printf("Conteúdo de *p: %p\n", p);
	printf("Endereço de x: %p\n", &x);

	// Conteúdo do endereço apontado por *p
	printf("\n");
	printf("Valor de x acessado via **p2: %d\n", **p2);
	printf("Valor de x: %d\n\n", x);

	printf("\n");

	return 0;

}
