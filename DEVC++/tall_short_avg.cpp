#include <stdio.h>

int main(){
	int t1, t2, t3, t4, t5;
	t1 = 180;
	t2 = 183;
	t3 = 190;
	t4 = 146;
	t5 = 198;
	int tavg;
	tavg = (t1 + t2 + t3 + t4 + t5)/3;
	printf("가장 작은 사람 : %d \n", t4);
	printf("가장 큰 사람 : %d \n", t5);
	printf("평균 : %d \n", tavg);
	return 0;
}
