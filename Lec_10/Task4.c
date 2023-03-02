#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void nhap_sl(int *n){
	do{
		printf("n = ");
		scanf("%d", n);
	}while(*n <= 0 || *n >= 50);
}

void nhap_mang(int *a, int n){
	printf("\nNhap mang\n");
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", a + i);
	}
	
	printf("\n\n");
}

void xuat_mang(int *a, int n){
	printf("Xuat mang\n");
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", *(a + i));
	printf("\n\n");
}

void tinh_tong (int *a, int n){
	if(n == 0)
		printf("Khong the tinh");
	else{
		int p = *a + *(a + n - 1);
		float q = 0;
		int i;
		for(i = 0; i < n; i++)
			q += *(a + i);
		q/=n;
		printf("P + Q = %.2f", p + q);
	}
	printf("\n\n");
}

void tinh_tong_x(int *a, int n, int x){
	printf("Tong cac phan tu chia het cho x: ");
	int check = 0;
	int i;
	for(i = 0; i < n; i++)
		if(*(a + i) == x){
			check = 1;
			break;
		}
	if(check == 0)
		printf("Khong phan tu nao thoa man");
	else{
		int sum = 0;
		for(i = 0; i < n; i++){
			if(*(a + i) % x == 0)
				sum += *(a + i);
		}
		printf("%d", sum);
	}
	printf("\n\n");
}

void xoa_pt(int *a, int *n, int index){
	int i;
	for(i = index; i < *n - 1; i++)
		*(a + i) = *(a + i + 1);
	(*n)--;
	//a = realloc(a, *n * sizeof(int));
}

void xoa_x(int *a, int *n, int x){
	printf("Mang sau khi xoa het %d\n", x);
	int i;
	for(i = 0; i < *n ; i++){
		if(*(a + i) == x){
			xoa_pt(a, n, i);
			i--;
		}
	}
}

int main(){
	int n;
	int x;
	nhap_sl(&n);
	int *a = malloc(n * sizeof(int ));
	
	nhap_mang(a, n);
	xuat_mang(a, n);
	
	tinh_tong(a, n);
	
	printf("x = ");
	scanf("%d", &x);
	tinh_tong_x(a, n, x);
	
	xoa_x(a, &n, x);
	xuat_mang(a, n);
}