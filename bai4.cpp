#include<stdio.h>

int main(){
	int month;
	printf("Nhap so thang: ");
	scanf("%d", &month);
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31 ngay");
			break;
		case 4: case 6: case 9: case 11:
			printf("30 ngay");
			break;
		case 2:
			printf("28 ngay");
			break;
		default:
			printf("thang ko hop le");
	}
	return 0; 
} 
