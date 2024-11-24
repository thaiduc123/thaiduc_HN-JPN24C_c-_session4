#include<stdio.h>

int main(){
	int n1, n2, n3;
	printf("Nhap so dau tien: \n");
	scanf("%d", &n1);
	printf("Nhap so thu hai: \n");
	scanf("%d", &n2);
	printf("Nhap so thu ba: \n");
	scanf("%d", &n3);
	if (n1<n2){
		if (n1<n3 && n3<n2){
			printf("co");
		} else {
			printf("khong");
		}
	}else {
		printf("khong nam trong khoang");
	}
	return 0; 
} 
