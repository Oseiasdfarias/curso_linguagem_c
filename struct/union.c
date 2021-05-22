#include <stdio.h>

union tipo{
	short int x;
	unsigned char c[2];

};

int main(){
	union tipo v;
	v.x = 1545;
	printf("\nValor de x = %d\n", v.x);
	// 00000110 -> 9
	printf("Valor de c[0] = %d\n", v.c[0]);
	//00001001 -> 6
	printf("Valor de c[1] = %d\n", v.c[1]);

	return 0;
}
