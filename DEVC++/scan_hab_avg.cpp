#include <stdio.h>

int main(){
	int k1, k2, k3, hab, avg;
	scanf("%d", &k1);
	scanf("%d", &k2);
	scanf("%d", &k3);
	hab = k1 + k2 + k3;
	avg = hab / 3;
	printf("���� = %d\n", hab);
	printf("��� = %d\n", avg);
	return 0;
}
