#include<stdio.h>

int main()
{
	int a,b;
	
	
	printf("Nhap 2 so nguyen a,b: ");
	scanf("%d%d", &a,&b);
	
	printf("Tong: %d", a+b);
	printf("\nHieu: %d", a-b);
	printf("\nTich: %d", a*b);
	printf("\nThuong: %f", float(a)/b);	
	
	return 0;
}
