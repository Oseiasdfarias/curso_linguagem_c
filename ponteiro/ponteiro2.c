#include <stdio.h>

int main(){
	/* um ponteiro é identificado pelo * que fica na frente da variavel
	   *a é um ponteiro que pode armazenar o endereço de memória de uma
	   variável ou outro tipo de estrutura.
	
	 Ponteiros não inicializados apontam para um espaço de memória 
	 indefinido.
	*/
	int x = 287, *p;
	
	/* Iniciando um ponteiro
	 * podemos iniciar um ponteiro atribuindo o endereço de uma 
	 * variavel da seguinte forma */
	p = &x;

	printf("\nValor de x: %d\n", x);
	printf("Dado do endereço armazenado em p: %d\n", *p);
	printf("Endereço de x: %p\n", &x);
	printf("Edereço armazenado em p: %p\n", p);
	printf("Edereço armazenado em p: %p\n\n", (void *) p);

	return 0;
}
