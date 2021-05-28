#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *f;
	f = fopen("arquivo.txt", "w");
	if (f == NULL){
		printf("Erro na abertura\n");
		exit(1);
	}

	char texto[20] = "Hello World - C";
	int i;
	for (i = 0; i < strlen(texto); i++){
		fputc(texto[i], f);
		fputc('_', f);

	}
	
	fclose(f);

	return 0;
}
