#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void nhap_mang(int *a, int n){
	printf("Nhap mang\n");
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", (a + i));
	}
	printf("\n\n");
}

void xuat_mang(int *a, int n){
	printf("Gia tri mang luu tru\n");
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", *(a + i));
	}
	printf("\n\n");
}

void kiem_tra(int *a, int n){
	int check = 1, i;
	for(i = 0; i < n; i++){
		if(*(a + i) <= 10){
			check = 0;
			break;
		}
	}
	if(check == 0)
		printf("Mang co phan tu nho hon hoac bang 10");
	else
		printf("Tat cac phan tu mang deu lon hon 10");
	printf("\n\n");
}

void xoa_pt(int *a, int *n, int index){
	int i;
	for(i = index; i < *n - 1; i++)
		*(a + i) = *(a + i + 1);
	(*n)--;
	a = (int*)realloc(a, *n * sizeof(int));
}

void xoa_chan(int *a, int *n){
	printf("Xoa cac phan tu chan ra khoi mang\n");
	int i;
	for(i = 0; i < *n; i++){
		if(*(a + i) % 2 == 0){
			xoa_pt(a, n, i);
			i --;
		}
	}
}

void tach_mang(int *a, int *b, int *c, int *n, int *m, int *p){
	printf("Tach mang\n");
	int i, j = 0, k = 0;
	for(i = 0; i < *n; i++){
		if(*(a + i)%3 == 0){
			*(b + j) = *(a + i);
			j ++;
		}else{
			*(c + k) = *(a + i);
			k++;
		}
	}
	*m = j;
	*p = k;
	a = (int *)realloc(a, 0 * sizeof(int));
	b = (int *)realloc(b, j * sizeof(int));
	c = (int *)realloc(c, k * sizeof(int));
}

int main(){
	int n;
	printf("n = ");
	int m = n, p = n;
	scanf("%d", &n);
	int *a = (int *)malloc(n * sizeof(int));
	int *b = (int *)malloc(n * sizeof(int));
	int *c = (int *)malloc(n * sizeof(int));
	nhap_mang(a, n);
	xuat_mang(a, n);
	
	kiem_tra(a, n);
	
	xoa_chan(a, &n);
	xuat_mang(a, n);
	
	tach_mang(a, b, c, &n, &m, &p);
	xuat_mang(b, m);
	xuat_mang(c, p);
}