#include <stdio.h>
#define MAX 100

void nhap(int *a, float *x){
	printf("a = ");
	scanf("%d", a);
	printf("x = ");
	scanf("%f", x);
	printf("\n\n");
}

void hien_thi1(int a, float x){
	printf("Hien thi voi tham tri\n");
	printf("a = %d\n", a);
	printf("add_tmp(a) = %p\n", &a);
	printf("x = %.2f\n", x);
	printf("add_tmp(x) = %p\n", &x);
	printf("\n\n");
}

void hien_thi2(int *a, float *x){
	printf("Hien thi voi tham tri\n");
	printf("a = %d\n", *a);
	printf("add_pointer(a) = %p\n", &a);
	printf("x = %.2f\n", *x);
	printf("add_pointer(x) = %p\n", &x);
}

int main(){
	int a;
	float x;
	nhap(&a, &x);
	
	hien_thi1(a, x);
	
	hien_thi2(&a, &x);
}