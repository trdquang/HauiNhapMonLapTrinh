#include <stdio.h>
#include <stdlib.h>

void nhap_duong(int*n, char c){
	do{
		printf("Nhap so duong %c = ", c);
		scanf("%d", n);
		if(*n <= 0){
			printf("Gia tri khong hop le\n");
//			system("pause");
//			system("cls");
		}
	}while(*n <= 0);
}

int giai_thua(int n){
	int res = 1;
	for(int i = 1; i <= n; i++)
		res *= i;
	return res;
}

int to_hop(int k, int n){
	return giai_thua(n)/ (giai_thua(k) * giai_thua(n - k));
}
int main(){
	int n, k;
	nhap_duong(&n, 'n');
	nhap_duong(&k, 'k');
	printf("C(%d, %d) = %d\n", k, n, to_hop(k, n));
	system("pause");
}