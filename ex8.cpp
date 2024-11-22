#include<stdio.h>

int main()
{
	float  canh1 , canh2 , canh3 ;
	printf("\nMoi nhap canh tam giac thu nhat :");
	scanf("%f",&canh1);
	printf("\nMoi nhap canh tam giac thu hai :");
	scanf("%f",&canh2);
	printf("\nMoi nhap canh tam giac thu ba :");
	scanf("%f",&canh3);
	if ( canh1 > 0 && canh2 > 0 && canh3 > 0 && canh1 + canh2 > canh3 && canh1 + canh3 > canh2 && canh3 + canh2 > canh1   )
	{
		printf("\nLa 3 canh cua tam giac .");
	}
	else
	{
		printf("\nKhong phai la 3 canh tam giac .");
	}
}