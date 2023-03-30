#include <stdio.h>

int main(){
	int na, ner;
	scanf("%d", na);
	scanf("%d", ner);
	
	int num;
	printf("User Number: ");
	scanf("%d", &num);
	
	if (num > 0){
		printf("Valid number detected. hello, user %d.", num);
	}
	
	if (na < ner)
	return na + ner;
}
