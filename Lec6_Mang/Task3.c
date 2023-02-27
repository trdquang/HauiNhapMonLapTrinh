#include <stdio.h>
#define MAX 200

void nhap_sl(int *n, char c){
	do{
		printf("%c = ", c);
		scanf("%d", n);
	}while(*n <= 5 || *n >= 20);
}

void nhap_mang(int a[MAX], int n){
	printf("Nhap %d gia tri cua mang, moi gia tri cach nhau boi dau cach\n");
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuat_mang(int a[MAX], int n){
	printf("Cac gia tri mang duoc luu tru\n");
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void xoa(int a[MAX], int *n, int vt){
	int i;
	for(i = vt; i < *n; i++)
		a[i] = a[i + 1];
	*n = *n - 1;
}

void chen(int a[MAX], int *n, int vt, int k){
	int i;
	for(i = *n; i > vt; i--)
		a[i] = a[i - 1];
	a[vt] = k;
	*n = *n + 1;
}

void xoa_le(int a[MAX], int *n){
	int i;
	for(i = 0; i < *n; i++){
		if(a[i] % 2 != 0){
			xoa(a, n, i);
			i --;
		}
	}
}



int main(){
	int n, a[MAX];
	nhap_sl(&n, 'n');
	nhap_mang(a, n);
	xuat_mang(a, n);
	xoa_le(a, &n);
	printf("Mang sau khi xoa het cac phan tu le\n");
	xuat_mang(a, n);
	int k, vt;
	printf("Nhap gia tri muon chen = ");
	scanf("%d", &k);
	printf("Nhap vi tri muon chen = ");
	scanf("%d", &vt);
	chen(a, &n, vt, k);
	printf("Mang sau khi da chen\n");
	xuat_mang(a, n);
}