#include <stdio.h>

int main(){

/* Esse é um comentário
 * em multiplas linhas
 * na liguagem c
 */

	char letra = 'a'; // instanciando uma variavel do tipo char e inicializando
	int n = 10;	// instanciando uma variavel do tipo char e inicializando
	float fl = 2.5454545;	// instanciando uma variavel do tipo char e inicializando

	printf("Número inteiro: %d\n", n*232);
	printf("Letra: %c\n", letra);
	printf("Letra a na tabela ascii: %d\n", letra);
	printf("Número float: %f\n", fl+32);

	printf("Letra %d\nnumero da letra em ascii %d\ninteiro %d\n", letra, letra, n);
  
	return 0;

}
