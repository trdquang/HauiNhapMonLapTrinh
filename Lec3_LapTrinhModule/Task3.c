#include <stdio.h>
#include <math.h>

void nhap_nguyen(int*n, char c){
	printf("%c = ", c);
	scanf("%d", n);
}

int tinh_bt(int x, int n){
	int res = 0;
	if(n == 2)
		res = 2 * x;
	else if(n > 2)
		res = (int)pow(x, n);
	return res;
}

int main(){
	int x, n;
	nhap_nguyen(&x, 'x');
	nhap_nguyen(&n, 'n');
	printf("F(%d, %d) = %d\n", x, n, tinh_bt(x, n)); 
}