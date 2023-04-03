#include <stdio.h>

int main(){
	int sec, min, hour, seccir1, seccir2;
	printf("Seconds: ");
	scanf("%d", &sec);
	hour = sec / 3600;
	seccir1 = sec - hour * 3600;
	min = seccir1 / 60;
	seccir2 = seccir1 - min * 60;
	printf("%dhour %dminute %dsecond", hour, min, seccir2);
	
	return 0;
}
