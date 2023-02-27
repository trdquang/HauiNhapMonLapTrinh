#include <stdio.h>
#define MAX 100

int main(){
	int a;
	float x;
	printf("a = ");
	scanf("%d", &a);
	printf("x = ");
	scanf("%f", &x);
	
	int *p1 = &a;
	float *p2 = &x;
	
	printf("Gia tri cua a = %d\n", *p1);
	printf("Dia chi cua s = %p\n\n\n", p1);
	
	printf("Gia tri cua x = %.2f\n", *p2);
	printf("Dia chi cua x = %p\n", p2);
}