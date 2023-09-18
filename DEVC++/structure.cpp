#include <stdio.h>

struct intro{
	char name[100];
	char intr[100];
};

int main(){
	struct intro num;
	printf("What is your name? : ");
	gets(num.name);
	printf("Please introduce yourself : ");
	gets(num.intr);
	
	printf("\nName : %s", num.name);
	printf("\nIntroduce : %s", num.intr);
	
	return 0;
}
