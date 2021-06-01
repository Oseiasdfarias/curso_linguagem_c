#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *arq = fopen("vetor.txt", "rb");
	if (arq == NULL){
		printf("Erro na abertura do arquivo!");
		exit(1);
	}
	/* Para ler um bloco de bytes de
		um arquivo usamos a função fread() */
		
	int total_lido, v[5];
	total_lido = fread(v, sizeof(int), 5, arq);
	if (total_lido != 5){
		printf("Erro na leitura do arquivo!");
		exit(1);
	}

	fclose(arq);
	
	printf("%d, %d, %d, %d, %d\n",
			v[0], v[1], v[2], v[3], v[4]);

	return 0;
}
