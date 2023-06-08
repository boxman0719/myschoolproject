#include <stdio.h>

int main(){
	
	int distance;
	printf("How far? \n");
	scanf("%d", &distance);
	
	if(distance >= 50){
		if(distance <= 60){
			printf("A");
		}else{
			printf("B");
		}
	}else{
		printf("C");
	}
		
return 0;
}
