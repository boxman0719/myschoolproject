#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	
	if(num > 0){
		printf("This number is bigger than 0");
	}else if(num < 0){
		printf("This number is not bigger than 0");
	}else if(num=0){
		printf("This number is freaking zero, mate! You shouldn't input this damn thing!");
	}else{
		printf("What the F**K is this?");
	}
	
	return 0;
}
