#include<stdio.h>

int main()
{
	int num1 , num2 , num3 ;
	printf("\nMoi nhap so cong to dien dau thang :");
	scanf("%d",&num1);
	printf("\nMoi nhap so cong to dien cuoi thang :");
	scanf("%d",&num2);
	num3 = num2 - num1;
	if(num3>=0 && num3 < 50)
	{
		printf("\nGia dien thang nay la 10.000VND");
	}
	else if(num3 >= 50 && num3 < 100)
	{
		printf("\nGia dien thang nay la 15.000VND");
	}
	else if(num3 >= 100 && num3 < 150 )
	{
		printf("\nGia dien thang nay la 20.000VND");
	}
	else if(num3 >= 150 && num3 < 200)
	{
		printf("\nGia dien thang nay la 25.000VND");
	}
	else if(num3 >= 200)
	{
		printf("\nGia dien thang nay la 30.000VND");
	}
	else
	{ 
		printf("\nBan da nhap sai so cong to dien :)))");
	}
}