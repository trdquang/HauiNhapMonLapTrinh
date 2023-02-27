#include <stdio.h>
#include <string.h>
#define MAX 100

void dem_tu(char s[MAX]){
	int d1 = 0, d2 = 0, d3 = 0;
	int i;
	for(i = 0; i < strlen(s); i++){
		if(s[i] >= 'a' && s[i] <= 'z')
			d1 ++;
		else if(s[i] >= 'A' && s[i] <= 'Z')
			d2 ++;
		else if(s[i] >= '0' && s[i] <= '9')
			d3 ++;
	}
	printf("Chuoi co %d ky tu thuong, %d ky tu hoa, %d chu so\n",
			d1, d2, d3);
}

void xoa_ky_tu(char s[MAX], int *n, int index){
	int i = index;
	for(; i < *n; i++)
		s[i] = s[i + 1];
	*n = *n - 1;
}

void xoa_ky_tu_a(char s[MAX], int *n){
	int i;
	for(i = 0; i < *n; i++){
		if(s[i] == 'a' || s[i] == 'A'){
			xoa_ky_tu(s, n, i);
			i--;
		}
	}
}

int dem_so_tu(char s[MAX]){
	int cnt = 0;
	int i = 0;
	for(; i < strlen(s); i++){
		if(s[i] == ' ')
			continue;
		cnt ++;
		while(i < strlen(s) && s[i] != ' ')
			i ++;
	}
	return cnt;
}

void mang_dao(char s[MAX]){
	char s1[MAX];
	int i = strlen(s) - 1;
	int j = 0;
	for(;i >= 0; i--)
		s1[j ++] = s[i];
	printf("Chuoi dao nguoc: \"%s\"", s1);
}

void in_tu(char s[MAX]){
	int i = 0;
	for(; i < strlen(s); i++){
		if(s[i] == ' ')
			continue;
		while(i < strlen(s) && s[i] != ' ')
			printf("%c", s[i]);
		printf("\n");
	}
}

int get_size(char s[MAX]){
	int cnt = 0;
	int i = 0;
	while(s[i] != '\0'){
		i ++;
	}
	return i;
}
int main(){
	char s[MAX];
	printf("Nhap chuoi: ");
	gets(s);
	int n = get_size(s);
	printf("n = %d\n", n);
//	printf("Chuoi duoc nhap: %s\n", s);
//	dem_tu(s);
	xoa_ky_tu_a(s, &n);
	printf("Chuoi sau khi xoa: %s\n", s);
	printf("So luong tu = %d\n", dem_so_tu(s));
	//in_tu(s);
}
//DAI   HOC   CONG NGHIEP        