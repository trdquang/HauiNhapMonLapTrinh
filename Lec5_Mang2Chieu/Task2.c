#include <stdio.h>
#include <math.h>
#define MAX 100

void nhap_sl(int *n, char c){
	do{
		printf("%c = ", c);
		scanf("%d", n);
	}while(*n <= 1 || *n >= 50);
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


void tinh_tong(int a[], int n){
	int sum = 0;
	int i;
	for(i = 0; i < n; i++)
		if(a[i] > 11)
			sum += a[i];
	printf("Tong cac phan tu lon hon 11 = %d\n", sum);
}

int ktra_hh(int n){
	int sum = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			sum += i + n/i;
	}
	int can = sqrt(n);
	if(can * can == n)
		sum -= can;
	if(sum == n)
		return 1;
	return 0;
}
int tim_kiem(int a[], int n){
	int i;
	for(i = n - 1; i >= 0; i--){
		if(ktra_hh(a[i])){
			return i;
		}
	}
	return -1;
}

void sap_xep(int a[], int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		if(a[i] < 0)
			for(j = i + 1; j < n; j++){
				if(a[j] < 0){
					if(a[i] > a[j]){
						int tmp  =a[i];
						a[i] = a[j];
						a[j] = tmp;
					}
				}
			}
	}
	
}

int main(){
	int n,x, a[MAX];
	nhap_sl(&n, 'n');
	nhap_mang(a, n);
	xuat_mang(a, n);
	tinh_tong(a, n);
	int index = tim_kiem(a, n);
	if(index == -1)
		printf("Mang khong co so hoan hao\n");
	else
		printf("Phan tu hoan hao cuoi cung nam o vi tri: %d\n", index);
	sap_xep(a, n);
	printf("Mang sau khi da sap xep\n");
	int i;
	xuat_mang(a, n);
}