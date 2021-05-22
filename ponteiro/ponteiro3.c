#include <stdio.h>

int main(){
	/* um ponteiro é identificado pelo * que fica na frente da variavel
	   *a é um ponteiro que pode armazenar o endereço de memória de uma
	   variável ou outro tipo de estrutura.
	
	 Ponteiros não inicializados apontam para um espaço de memória 
	 indefinido.
	*/
	int y, x, *p;
	
	printf("Digite um valor para x: \n");
	scanf("%d", &x);
	printf("Digite um valor para y: \n");
	scanf("%d", &y);

	/* Iniciando um ponteiro
	 * podemos iniciar um ponteiro atribuindo o endereço de uma 
	 * variavel da seguinte forma */
	p = &x;

	printf("\nValor de x: %d\n", x);
	printf("Dado do endereço armazenado em p: %d\n", *p);
	printf("Endereço de x: %p\n", &x);
	printf("Edereço armazenado em p: %p\n", p);

	/* O Ponteiro permite a modificação de uma variavel que ele aponta de
	 * forma indireta, exemplo abaixo:
	 */
	*p = y;
	printf("\nValor de x: %d\n", x);
	printf("Dado do endereço armazenado em p: %d\n", *p);
	printf("Endereço de x: %p\n", &x);
	printf("Edereço armazenado em p: %p\n\n", p);


	return 0;
}
