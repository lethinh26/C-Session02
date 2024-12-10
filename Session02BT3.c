#include <stdio.h>
int main () {
	int a,b,tong,hieu,tich, thuong;
	printf("Nhap vao so nguyen a, b: ");
	scanf("%d %d", &a, &b);
	tong = a+b;
	hieu = a-b;
	thuong = a/b;
	tich = a*b; 
	printf("Tong a+b = %d\n", tong);
	printf("Hieu a-b = %d\n", hieu);
	printf("Tich a*b = %d\n", tich);
	printf("Thuong a/b = %d\n", thuong);
	return 0;
}
