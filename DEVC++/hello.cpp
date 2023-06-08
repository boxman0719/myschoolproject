#include <stdio.h>

int main(){
	int a, time;
	a = 1;
	time = 0;
	while(a <= 10){
		printf("%d\n", a);
		a++;
		time = time + 1;
	}
	printf("\n%d times \n", time);
	
	int dan = 2;
	int i = 1;
	while(i <= 9){
		printf("%d + %d = %d\n", dan, i, dan * i);
		i++;
	}
	
	//Presented by Mann co.
	return i;
}
