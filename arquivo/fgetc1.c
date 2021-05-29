#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	f = fopen("arquivo.txt", "r");
	if (f == NULL){
		printf("Erro na abertura do arquivo");
		exit(1);
	}

	char c;
	int i;
	// Lendo do arquivo um caracter por vez
	for (i = 0; i < 10; i++){
		c = fgetc(f);
		printf("%c", c);
	}

	printf("\nFim\n");
	fclose(f);

	return 0;
}
