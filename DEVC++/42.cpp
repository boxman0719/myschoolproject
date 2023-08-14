#include <stdio.h>
int main(){
	int endNum, cnt = 0;
	printf("lastnum: ");
	scanf("%d", &endNum);
	for(int i = 1; i <= endNum; i++){
		if(i % 2 == 0){
			cnt++;
		}
	}
	printf("amount: %d\n", cnt);
	return 0;
}
