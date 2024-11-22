#include<stdio.h>

int main()
{
	int numB1 , numB2 , numB3 ;
	printf("\nMoi nhap so nguyen thu nhat :");
	scanf("%d",&numB1);
	printf("\nMoi nhap so nguyen thu hai :");
	scanf("%d",&numB2);
	printf("\nMoi nhap so nguyen thu ba :");
	scanf("%d",&numB3);
	if ( (numB1 < numB3  && numB3 < numB2 ) || (numB2 < numB3 && numB3 < numB1) )
	{
		printf("\nSo %d nam giua so %d va %d ", numB3 , numB2 , numB1 );
	}
	else 
	{
		printf("\nSo %d khong nam giua so %d va %d " , numB3 , numB2 , numB1);
	}
}