#include<stdio.h>

int main(){
	int n;
	printf("Nhap o nguyen: ");
	scanf("%d", &n);
	if (n%2==0){
		printf("So chan");
	} else {
		printf("So le");
	}
	return 0; 
} 
