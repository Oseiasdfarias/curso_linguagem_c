#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
	char nome[30], endereco[30];
	int idade;
};

int main(){
	FILE *arq;
	arq = fopen("vetor.txt", "wb");
	if (arq == NULL){
		printf("Erro na abertura\n");
		exit(1);
	}
	int tg1, tg2, tg3, tg4, v[5] = {1, 2, 3, 4, 5};
	char str[20] = "Hello World!";
	float x = 5;

	struct cadastro cad = {"Oseias", "Rua 1", 27};

	// Grava todo o array no arquivo de 5 posições
	tg1 = fwrite(v, sizeof(int), 5, arq);
	tg2 = fwrite(str, sizeof(char), 20, arq);
	tg3 = fwrite(&x, sizeof(float), 1, arq);
	tg4 = fwrite(&cad, sizeof(struct cadastro), 1, arq);

	printf("tm %d, tg1 %d\n", 5, tg1);
	printf("tm %d, tg2 %d\n", 20, tg2);
	printf("tm %d, tg1 %d\n", 1, tg3);
	printf("tg4 %d\n", tg4);

	if (tg1 != 5 || tg2 != 20 || tg3 != 1 || tg4 != 1){
		printf("Erro na escrita do arquivo!");
		exit(1);
	}

	fclose(arq);
	return 0;
}
