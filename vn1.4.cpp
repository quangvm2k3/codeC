#include <stdio.h>

int main()
{
	int a,b;
	printf("nhap so thu nhat : " );
	scanf("%d", &a);
	printf("nhap so thu hai: " );
	scanf("%d", &b);
if((a-b)==0)
{
	printf("Vay %d = %d", a , b);
}
if((a-b)>0)
{
	printf("Vay %d > %d", a , b);	
}
if((a-b)<0)
{
	printf("Vay %d < %d",a ,b);
}
    return 0;
}
