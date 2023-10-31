#include <stdio.h>

int getSum(int a, int b){
	int result;
	if(a < b){
		result = b;
	}else{
		result = a;
	}
	return result;

}
	
int main(){
	int one, two, sum;
	scanf("%d", &one);
	scanf("%d", &two);
	sum = getSum(one, two);
	printf("%d", sum);
	return 0;
}
