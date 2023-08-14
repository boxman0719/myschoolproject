#include <stdio.h>

int main(){
	int endNum;
	
	printf("last num: ");
	scanf("%d", &endNum);
	
	for(int i = 1; i <= endNum; i++){
		if(i % 2 == 0){
			printf("%d\n", i);
		}
	}
	return 0;
}

//mond, mond, ja, ja
