#include <stdio.h>

int main(){
	char ch[100];
	gets(ch);
	for(int i = 0; ch[i] != '\0'; i++){
		printf("%d\n", ch[i]);
	}
}
