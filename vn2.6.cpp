/*nhap int in ra thong bao la chan hay le*/
#include<stdio.h>

int main()
{
	int i;
	printf("nhap so nguyen duong: ");
	scanf("%d", &i);
	if(i < 1)
	{
		printf("Khong phai so nguyen duong");	
	}	
	else	
	{
		if(i %2 == 1)
		{
			printf("So le");
		}
		if(i %2 == 0)
		{
			printf("So chan");
		}
	}
	return 0;
}
