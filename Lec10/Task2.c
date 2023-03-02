#include <stdio.h>
#include <math.h>


void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

float tinh_bt1(float x){
	float res = exp(abs(x)) + pow(x, 6) + pow(x * x + 1, 1.0/3);
	return res;
}

float tinh_bt2(float x, int n){
	if(n < 1)
		return 1;
	float res = 2022;
	int i;
	for(i = 1; i <= n; i++)
		res += pow(x, 1.0/i)/ (n + i);
	return res;
}

int main(){
	float a;
	int b, c;
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	if(c < b)
		swap(&b, &c);
	printf("a = %.2f\nb = %d\nc = %d\n\n", a, b, c);
	
	printf("P(%.2f) = %.2f\n\n", a, tinh_bt1(a));
	
	printf("S(%.2f, %d) - S(%.2f, %d) = %.2f", a, c, a, b, tinh_bt2(a, c) - tinh_bt2(a, b));
}