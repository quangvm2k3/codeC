/*nhap 4 so nguyen . tim so lon nhat (2 cach)*/
/*c1*/
#include<stdio.h>

int main()
{
	int a , b , c , d; 
	printf("nhap so thu nhat : ");
	scanf("%d" , &a);
	printf("nhap so thu hai : ");
	scanf("%d" , &b);
	printf("nhap so thu ba : ");
	scanf("%d" , &c);
	printf("nhap so thu tu : ");
	scanf("%d" , &d);
	if(a >= b)
	{
		if(a >= c)
		{
			if(a >= d)
			{
				printf("max = %d", a);
			}
			else	
			{
				printf("max = %d", d);
			}
		}	 
		else
		{
			if(c >= d)
			{
				
				printf("max = %d", c);
			}
			else
			{
				printf("max = %d", d);
			}
		}
	}
	else
	{
		if(b >= c )
		    if(b>d)
			{
				printf("max = %d", b);
			}
		    else
			{
				printf("max = %d", d);
			}
		else
		{
			if(c>= d)
		    {
				printf("max = %d", c);
			}
			else
			{
				printf("max = %d", d);
			}	
	    }	
    }
	return 0;	
}

