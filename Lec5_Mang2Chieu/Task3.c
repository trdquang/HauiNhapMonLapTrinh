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


void tinh_tbc(int a[], int n){
	int sum = 0;
	int cnt = 0;
	int i;
	for(i = 0; i < n; i++)
		if(a[i] > 7){
			sum += a[i];
			cnt ++;
		}
	if(cnt == 0)
		printf("Khong co phanm tu nao lon hon 7\n");
	else
		printf("TBC cac phan tu lon hon 7 = %.2f\n", (float)sum/cnt);
}

void xoa(int a[], int *n, int index){
	int i;
	for(i = index; i < *n; i++)
		a[i] = a[i + 1];
	*n = *n - 1;
}
void xoa_le(int a[], int *n){
	int i;
	for(i = 0; i < *n; i++){
		if(a[i] % 2 != 0){
			xoa(a, n, i);
			i--;
		}
	}
}

int main(){
	int n,x, a[MAX];
	nhap_sl(&n, 'n');
	nhap_mang(a, n);
	xuat_mang(a, n);
	tinh_tbc(a, n);
	xoa_le(a, &n);
	printf("Mang sau khi xoa het phan tu le\n");
	xuat_mang(a, n);
	printf("n = %d\n", n);
}