#include<stdio.h>

int main(){
	int year;
	printf("Nhap nam: ");
	scanf("%d", &year);
	if (year<0){
		printf("Nam nhap vao khong hop le");
		return 1;
	}
	if (year%4==0){
		printf("nam nhuan");
	} else {
		printf("khong phai nam nhuan");
	}
	return 0; 
} 
