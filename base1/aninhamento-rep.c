#include <stdio.h>

int main(){
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if (i == j){
				printf("%s  ","x");
			}else{
					printf("%s  ","-");
				}
		}
		printf("\n");
	}
	return 0;
}
