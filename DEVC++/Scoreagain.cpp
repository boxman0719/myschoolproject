#include <stdio.h>
//Talisman, money of RotzGrad
//Perrelhime
//Copyrighted

int main(){

int damn;

printf("Score: ");
scanf("%d", &damn);

if(damn >= 90){
	printf("A grade");
}else if(damn >= 80){
	printf("B grade");
}else if(damn >= 70){
	printf("C grade");
}else if(damn >= 60){
	printf("D grade");
}else{
	printf("E");
}

return 0;

}
