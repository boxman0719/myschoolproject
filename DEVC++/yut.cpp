#include <stdio.h>

int main(){
	int yutsum, yut1, yut2, yut3, yut4;
	
	printf("1: \n");
	scanf("%d", &yut1);
	printf("2: \n");
	scanf("%d", &yut2);
	printf("3: \n");
	scanf("%d", &yut3);
	printf("4: \n");
	scanf("%d", &yut4);
	
	yutsum = yut1 + yut2 + yut3 + yut4;
	
	if(yutsum == 0){
		printf("��");
	}else if(yutsum == 1){
		printf("��");
	}else if(yutsum == 2){
		printf("��");
	}else if(yutsum == 3){
		printf("��");
	}else if(yutsum == 4){
		printf("��");
	}else{
		printf("LIER");
	}
	
	return 0;
}
