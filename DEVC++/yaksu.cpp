#include <stdio.h>

int main(){
	int endNum, cnt = 0;
	printf("lastnum: ");
	scanf("%d", &endNum);
	for(int i = 1; i <= endNum; i++){
				if(endNum % i == 0){
			cnt++;
		}
	}
	printf("amount: %d\n", cnt);
	return 0;
}
