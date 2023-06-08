#include <stdio.h>

int main(){
	int com, sma, num;
	printf("A number(Natural): ");
	scanf("%d", &com);
	sma = 1;
	num = 0;
	printf("weak num: \n\n");
	while(sma <= com){
		if(com % sma == 0){
			printf("%d\n", sma);
		}
		sma++;
		num++;
	}
	printf("\nthe number of The weaks: %d", num);
	
	
	return 0;
}
