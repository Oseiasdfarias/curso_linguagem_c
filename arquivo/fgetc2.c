#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	f = fopen("arquivo.txt", "r");
	if (f == NULL){
		printf("Erro na abertura do arquivo");
		exit(1);
	}

	char c = fgetc(f);
	// Lendo do arquivo um caracter por vez
	while (c != EOF){
		printf("%c", c);
		c = fgetc(f);
	}

	printf("\nFim\n");
	fclose(f);

	return 0;
}
