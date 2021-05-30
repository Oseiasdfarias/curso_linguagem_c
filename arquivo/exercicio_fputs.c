#include <stdio.h>
#include <stdlib.h>

int main(){
	// Escrevendo string em arquivos
	FILE *f;
	f = fopen("arquivo1.txt", "w");
	if (f == NULL){
		printf("Erro na abertura!");
		exit(1);
	}

	fputs("\nHello\n", f);
	fputs("World\n", f);

	fputs("\nHello", f);
	fputc('\n', f);
	fputs("World\n", f);
	fputc('\n', f);
	
	fclose(f);

	return 0;
}
