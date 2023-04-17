 #include <stdio.h>

int main(){
	int prac;
	printf("Say your point! \n");
	scanf("%d", &prac);
	if(prac >= 90){
		if(prac > 100){
		printf("Liar");
		}else{
			printf("A grade");
		}
	}else if(prac >= 80){
		printf("B grade");
	}else if(prac >= 70){
		printf("C grade");
	}else if(prac >= 60){
		printf("D grade");
	}else{
		printf("E grade");
	}
	return 0;
}
