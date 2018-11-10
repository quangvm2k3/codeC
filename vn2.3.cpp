 #include<stdio.h>

int main()
{
	float a,b,c;
	printf("nhap so thu nhat :");
	scanf("%f", &a);
	printf("nhap so thu hai :");
	scanf("%f", &b);
	printf("nhap so thu ba :");
	scanf("%f", &c);
    if(a==b==c)
	{
		printf("max = %.1f" , a);
	}
	
	if (a >= b)
	{
		if(a >= c)
		{ 
			printf("max = %.1f" , a);
		}
		if(a < c);
		{
			printf("max = %.1f" , c);
		}
	}
	else
	{
		if(b >= c)
		{ 
			printf("max = %.1f" , b);
		}
		if(b < c)
		{
			printf("max = %.1f " , c);
		}
	}
    return 0; 
}

