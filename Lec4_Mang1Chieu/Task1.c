#include <stdio.h>

void nhap_duong(int *n, char c){
	do{
		printf("Nhap %c(>0) = ", c);
		scanf("%d", n);
		if(*n <= 0)
			printf("Gia tri nhap khong hop le\n");
	}while(*n <= 0);
}

int tim_fibo(int n){
	if(n == 1)
		return 1;
	if(n == 2)
		return 1;
	return tim_fibo(n - 1) + tim_fibo(n - 2);
}
int main(){
	int n;
	nhap_duong(&n, 'n');
	printf("F[%d] = %d\n", n, tim_fibo(n));
}