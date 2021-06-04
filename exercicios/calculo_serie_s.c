#include <stdio.h>
#include <stdlib.h>

float serieS(int n){
	if (n > 0)
		return ((1 + n * n) / n) + serieS(n - 1);
	else
			return 0.0;
}

int main(){
	int a = 5;
	printf("Série S de 5 = %f\n", serieS(a));

	return 0;
}
