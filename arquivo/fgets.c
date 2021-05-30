#include <stdio.h>
#include <stdlib.h>

int main(){

	char str[20];
	FILE *arq;

	arq = fopen("arquivo.txt", "r");
	if (arq == NULL){
		printf("Erro na abertura do arquivo");
		exit(1);
	}

		char *result = fgets(str, 12, arq);
		if (result == NULL){
			printf("Erro na leitura");
		}else{
			printf("%s\n", str);
		}

	fclose(arq);

	return 0;
}
