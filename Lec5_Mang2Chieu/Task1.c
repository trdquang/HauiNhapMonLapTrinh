#include <stdio.h>
#include <math.h>
#define MAX 100

void nhap_sl(int *n, char c){
	do{
		printf("%c = ", c);
		scanf("%d", n);
	}while(*n <= 1 || *n >= 40);
}

void nhap_mang(int a[], int n){
	printf("Nhap %d gia tri cho mang, moi gia tri cach nhau boi dau cach\n");
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuat_mang(int a[], int n){
	printf("Gia tri mang duoc luu tru\n");
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int ktra_nt(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

void xu_ly_mang(int a[], int n){
	int sum = 0;
	int i;
	for(i = 0; i < n; i++)
		if(ktra_nt(a[i]))
			sum += a[i];
	printf("Tong cac gia tri nguyen to trong mang = %d\n", sum);
}

void tim_kiem(int a[], int n, int x){
	int i;
	int cnt = 0;
	printf("Cac vi tri %d xuat hien trong mang\n", x);
	for(i = 0; i < n; i++){
		if(a[i] == x){
			cnt ++;
			printf("%d ", i);
		}
	}
	printf("\n%d xuat hien %d lan trong mang\n", x, cnt);
}
int main(){
	int n,x, a[MAX];
	nhap_sl(&n, 'n');
	nhap_mang(a, n);
	xuat_mang(a, n);
	xu_ly_mang(a, n);
	printf("x = ");
	scanf("%d", &x);
	tim_kiem(a, n, x);
}