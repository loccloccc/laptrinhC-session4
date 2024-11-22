#include<stdio.h>

int main()
{
	int a ;
	printf("\nMoi ban nhap thang :");
	scanf("%d",&a);
	if( a == 1 || a== 3 || a == 5 || a == 7 || a ==8 || a== 10 || a == 12  )
	{
		printf("\nThang %d co11 31 ngay", a );
	}
	else if (a == 4 || a == 6 || a == 9 || a == 11)
	{
		printf("\nThang %d co 30 ngay ",a);
	}
	else if (a==2)
	{
		printf("\nThang %d co 28 ngay " , a);
	}
}