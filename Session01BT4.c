#include <stdio.h>
int main () {
	int a,S,P;
	printf("Nhap vao chieu dai canh hinh vuong: ");
	scanf("%d", &a);
	S = a*a;
	P = a*4;
	printf("Dien tich hinh vuong: %d\n", S);
	printf("Chu vi hinh vuong: %d\n", P);
	return 0;
}
