#include <stdio.h>

int main(){
	char ch;
	printf("Digite um síbolo de pontuação: ");
	scanf("%c", &ch);

	switch( ch ) {
		case '.': printf("Ponto.\n"); break;
		case ',': printf("Virgula.\n"); break;
		case ':': printf("Dois Pontos.\n"); break;
		case ';': printf("Ponto e Vígula.\n"); break;
		default : printf("Não é Pontuação.\n"); break;
	}

	return 0;
}
