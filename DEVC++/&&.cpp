#include <stdio.h>

int main(){ /* this is what */
	char ch[100];
	gets(ch);
	for(int i = 0; ch[i] != '\0'; i++){
		if(ch[i] >= 'A' && ch[i] <= 'Z'){
			ch[i] = ch[i] + ('a' - 'A');
		}else if(ch[i] >= 'a' && ch[i] <= 'z'){
		ch[i] = ch[i] - ('a' - 'A');
	}
	}
	printf("%s", ch);
	
	return 0;
}
// This IS
