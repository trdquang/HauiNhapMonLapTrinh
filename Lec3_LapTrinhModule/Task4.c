#include <stdio.h>

void nhap_duong(int*n, char c){
	do{
		printf("Nhap so nguyen duong %c = ", c);
		scanf("%d", n);
		if(*n <= 0)
			printf("Gia tri nhap khong hop le\n");
	}while(*n <= 0);
}

int tim_uc(int a, int b){	
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	if(b == 0)
		return a;
}

int tim_bc(int a, int b){
	return a * b/ tim_uc(a, b);
}

int main(){
	int a, b;
	nhap_duong(&a, 'a');
	nhap_duong(&b, 'b');
	printf("UCLL (%d, %d) = %d\n", a, b, tim_uc(a, b));
	printf("BCNN (%d, %d) = %d\n", a, b, tim_bc(a, b));
}