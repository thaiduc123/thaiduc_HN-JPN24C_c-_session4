#include<stdio.h>

int main(){
	int dauThang, cuoiThang, total, soDien;
	printf("Nhap so cong to dien dau thang: ");
	scanf("%d", &dauThang);
	printf("Nhap so cong to dien cuoi thang: ");
	scanf("%d", &cuoiThang);
	soDien = cuoiThang - dauThang;
	if (soDien<0){
		printf("khong hop le");
	} else {
		if (0<=soDien && soDien<50){
			total = soDien * 10000;
			printf("So tien dien phai tra: %d", total);
		} 
		if (50<=soDien && soDien<100){
			total = soDien * 15000;
			printf("So tien dien phai tra: %d", total);
		} 
		if (100<=soDien && soDien<150){
			total = soDien * 20000;
			printf("So tien dien phai tra: %d", total);
		} 
		if (150<=soDien && soDien<200){
			total = soDien * 25000;
			printf("So tien dien phai tra: %d", total);
		} 
		if (200<=soDien){
			total = soDien * 30000;
			printf("So tien dien phai tra: %d", total);
		} 
	}
	return 0; 
} 
