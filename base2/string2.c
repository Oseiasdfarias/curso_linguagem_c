#include <stdio.h>
#include <string.h>

int main(){
	char palavra[20] = "Oseias Farias\0";
	int tm; 

	char palavra2[13];
	strcpy(palavra2, palavra);
	printf("cópia: %s\n", palavra2);

	tm = strlen(palavra);
	printf("Tamanho da palavra: %d\n", tm);
	printf("Palavra: %s", palavra);
	palavra[0] = 'o';
	palavra[7] = 'f';
	printf("\nPalavra modificada: %s\n", palavra);

	return 0;
}
