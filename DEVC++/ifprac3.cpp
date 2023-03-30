#include <stdio.h>

int main(){
	int fir, sec;
	printf("Please give me two numbers. I\'ll compute them. \n");
	scanf("%d", &fir);
	scanf("%d", &sec);
	
	if (fir > sec){
		printf("First one is bigger.");
		}
	else{
		printf("Second one is bigger.");
	}
return 0;
}
