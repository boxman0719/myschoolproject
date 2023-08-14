#include <stdio.h>

int main(){
	int dan = 2;
	for(int i = 1; i <= 9; i++){
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	return 0;
}
