#include <stdio.h>
#define MAX 200

void nhap_sl(int *n, char c){
	do{
		printf("%c = ", c);
		scanf("%d", n);
	}while(*n <= 0 || *n >= 100);
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

int tim_kiem(int a[MAX], int n, int x){
	int i;
	for(i = 0; i < n; i++)
		if(a[i] == x)
			return i;
	return -1;	
}

int ktra(int a, int b){
	if(a % 2 == 0 && b % 2 == 0 && a > b)
		return 1;
	if(a % 2 != 0 && b % 2 != 0 && a < b)
		return 1;
	if(a % 2 != 0 && b % 2 == 0)
		return 1;
	return 0;
}

void sap_xep(int a[MAX], int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(ktra(a[i], a[j])){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
int main(){
	int n, a[MAX];
	int k;
	nhap_sl(&n, 'n');
	nhap_mang(a, n);
	xuat_mang(a, n);
	printf("Nhap gia tri muon tim kiem k = ");
	scanf("%d", &k);
	printf("Vi tri dau tien cua %d trong mang la %d\n"
		, k, tim_kiem(a, n, k));
	sap_xep(a, n);
	printf("Mang sau khi sap xep\n");
	xuat_mang(a, n);
}