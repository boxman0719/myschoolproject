#include <stdio.h>

int main(){
	int h1, m1, s1, s2;
	printf("Hour: ");
	scanf("%d", &h1);
	printf("Minute: ");
	scanf("%d", &m1);
	printf("Second: ");
	scanf("%d", &s1);
	s2 = s1 + m1 * 60 + h1 * 3600;
	printf("Seconds: %d", s2);
	return 0;
}
