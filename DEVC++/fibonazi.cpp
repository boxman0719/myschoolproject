#include <stdio.h>

int main(){
	char origin[1024], enc[1024];
	int shift;
	
	printf("��ȣȭ�� ���ڿ�(�ҹ���) : ");
	gets(origin);
	
	printf("����Ʈ ����(1~10) : ");
	scanf("%d", &shift);
	
	for(int i = 0; origin[i] != '\0'; i++){
		enc[i] = ((origin[i] - 'a') + shift) % 26 + 'a';
	}
	
	printf("��ȣȭ�� ���ڿ� : %s", enc);
	
	return 0;
}
