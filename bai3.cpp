#include<stdio.h>

int main(){
	int n, kq1, kq2;
	printf("Nhap o nguyen: ");
	scanf("%d", &n);
	kq1 = n/3;
	kq2 = n/5;
	if (n%3==0 && n%5==0){
		printf("Ket qua la: %d %d\n", &kq1, &kq2);
	}else if (n%3==0){
		printf("Ket qua la: %d\n", &kq1);
	}else if (n%5==0){
		printf("Ket qua la: %d\n", &kq2);
	}
	return 0; 
} 
