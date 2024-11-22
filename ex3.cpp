#include<stdio.h>

int main()
{
	int a ; 
	printf("\nMoi nhap so nguyen :");
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	{
		printf("So nay chia het cho 3 va 5 .");
	}
	else if (a%5==0)
	{
		printf("So nay chia het cho 5.");
	}
	else if (a%3==0 )
	{
		printf("So nay chia het cho ca 3 .");
	}
	else
	{
		printf("So nay khong chia het cho 3 va 5 .");
	}
}