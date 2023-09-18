#include <stdio.h>

int main(){
	char ch[100];
	gets(ch);
	for(int i = 0; ch[i] != '\0'; i++){
		if(ch[i] == ' '){
			ch[i] = '_';
		}
	}
	printf("%s", ch);
	return 1;
}
