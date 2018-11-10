/*nhap x, y va mot trong 4 toan tu 
+ x + y
- ...
* ...
/ ...*/

#include<stdio.h>

int main()
{
	int z;
	float x, y, t1, t2, t3, t4;
	printf("nhap x : ");
	scanf("%f", &x);
	printf("nhap y : ");
	scanf("%f", &y);
	printf("nhap toan tu trong do : \"+\" = 1 , \"-\" = 2 , \"*\" = 3 , \"/\" = 4 : ");
	scanf("%d", &z);
	switch(z)
	{
		case(1):
			{
				t1 = x + y;
				printf("%f + %f = %f", x , y , t1);
				break;
			}
		case(2):
			{
				t2= x - y;
				printf("%f - %f = %f", x , y ,t2);
				break;
			}	
		case(3):
			{
				t3 = x * y;
				printf("%f * %f = %f", x , y ,t3);
				break;
			}
		case(4):
			{
				if(y==0)
				{
					printf("loi : y  khac 0");
				}
				else
				{
					t4 = x / y;
					printf("%f / %f = %.1f" , x , y , t4);
				}
				break;
			}	
	}
	return 0;
}
