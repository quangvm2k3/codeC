#include <stdio.h>
#include <math.h>

int main()
{

	int a,b,c;
	printf("giai phuong trinh bac hai");
	printf("\nnhap so thu nhat : ");
	scanf("%d", &a);
	printf("nhap so thu hai : ");
	scanf("%d", &b);
	printf("nhap so thu ba : ");
	scanf("%d", &c);
	int d;
	d = b * b - 4 * a * c;
	float x;
	x = - b / 2 * a;
	float y;
	y = (-b - sqrt(d)) / 2 * a;
	float z;
	z = (-b + sqrt(d)) / 2 * a;

if(d<0, a==0)
	{
		printf("phuong trinh vo nghiem hoac khong phai phuong trinh bac hai");
	} 	    
/*neu delta = 0 va a khac 0*/
if (a==0)
    {
	    printf("x = %f" , x );
    }
if (d>0)	
    {
	    printf("x1 = %.5f" , y);
        printf("\thoac x2 = %.5f", z);
    }	
    return 0;
}
