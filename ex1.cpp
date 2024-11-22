#include<stdio.h>

int main()
{
	int a ; 
	printf("\nMoi nhap so nguyen :");
	scanf("%d", &a ); 
	if(a>0)
	{
		printf("\n%d la so duong ", a);
	}
	else if (a<0)
	{
		printf("\n%d la so am ",a );
	}
	else
	{
		printf("khong la so duong , khong la so am ");
	}
}