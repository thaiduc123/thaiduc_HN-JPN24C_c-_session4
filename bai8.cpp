#include<stdio.h>

int main(){
	int a, b, c;
	printf("Nhap canh dau tien: ");
	scanf("%d", &a);
	printf("Nhap canh thu hai: ");
	scanf("%d", &b);
	printf("Nhap canh thu ba: ");
	scanf("%d", &c);
	if (a<=0 || b<=0 || c<=0){
		printf("canh khong hop le");
		return 1;
	}
	if (a+b>c && b+c>a && a+c>b){
		printf("la ba canh tam giac");
	} else {
		printf("khong pahi 3 canh tam giac");
	}
	return 0; 
} 
