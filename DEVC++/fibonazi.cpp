#include <stdio.h>

int main(){
	char origin[1024], enc[1024];
	int shift;
	
	printf("암호화할 문자열(소문자) : ");
	gets(origin);
	
	printf("시프트 개수(1~10) : ");
	scanf("%d", &shift);
	
	for(int i = 0; origin[i] != '\0'; i++){
		enc[i] = ((origin[i] - 'a') + shift) % 26 + 'a';
	}
	
	printf("암호화된 문자열 : %s", enc);
	
	return 0;
}
