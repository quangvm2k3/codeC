#include<stdio.h>
 
int main() 
{
    float a , b , c , max ;
 	printf("nhap so thu nhat : ");
 	scanf("%f" , &a);
	printf("nhap so thu hai : ");
 	scanf("%f" , &b);   
 	printf("nhap so thu ba : ");
 	scanf("%f" , &c);
 	if (max = a)
	{	
		if(max < b) 
		{
		    max = b;
		}
		
		if(max < c) 
		{
			max = c;
		}
	}
	printf("max = %f" , max);		
    return 0;
}
