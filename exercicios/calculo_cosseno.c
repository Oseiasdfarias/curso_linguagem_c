#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça uma função que receba camo parâmetro o valor 
 * de um ângulo em graus e calcule o valor do cosseno
 * desse ângulo usando sua respectiva série de taylor*/

// Função para calcular o fatorial
int fatorial (int n){
	int i, fat = 1;
	for (i = 1; i <= n; i++){
		fat = fat * i;
	}
	return fat;
}

float cosseno(float ang){
	int n;
	float cos = 0.0;
	for (n = 0; n <= 10; n++){
		cos = cos + pow(-1, n) * pow(ang, 2*n) / fatorial(2*n);
	}
	return cos;
}

int main(){
	float ang = 45.0; // graus
	ang = 3.141593 * ang / 180.0; // em radiano
	printf("\nCosseno de %f = %f\n",ang, cosseno(ang));
	printf("Cosseno de %f usando a lib math.h = %f\n\n",ang, cos(ang));
}
