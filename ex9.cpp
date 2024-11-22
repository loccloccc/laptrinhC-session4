#include<stdio.h>

int main()
{
	int day , month , year ;
	printf("\nMoi ban nhap ngay :");
	scanf("%d",&day);
	printf("\nMoi ban nhap thang  :");
	scanf("%d",&month);
	printf("\nMoi ban nhap nam :");
	scanf("%d",&year);
	
	switch(month)
	{
		case 1 : case 3 : case 5 : case 7: case 8 : case 10 : case 12:
			if(day >= 1 && day <= 31 )
			{
				printf("\nGia tri hop le.");
			}
			else
			{
				printf("\Gia tri khong hop le.");
			}
			break;
		case 4 : case 6 : case 9 : case 11:
		 	if((day >= 1 && day <= 30 ) )
			{
				printf("\nGia tri hop le.");
			}
			else
			{
				printf("\Gia tri khong hop le.");
			}
			break;
		case 2 :
			if ( day >=1 && day <=29)
			
				if (year % 400 ==0 || (year % 4 == 0 && year % 100 != 0 ))
				{
					printf("\nGia tri hop le.");				
				}
				else 
				{
					printf("\nGia tri khong hop le.");
				}
			break ;
		
	}
		
	return 0 ; 

}