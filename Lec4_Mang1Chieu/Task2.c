#include <stdio.h>

void nhap_nguyen(int* n, char c){
	do{
		printf("Nhap %c(%c > 0) = ", c, c);
		scanf("%d", n);
		if(*n <= 0)
			printf("Gia tri nhap khong hop le\n");
	}while(*n <= 0);
}

float tinh_bt(int n){
	if(n == 1)
		return (float)1/(n * (n + 1));
	return (float)1/(n * (n + 1)) + tinh_bt(n - 1);
}
int main(){
	int n;
	nhap_nguyen(&n, 'n');
	printf("F(%d) = %.2f\n", n, tinh_bt(n));
}