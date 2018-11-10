#include <stdio.h>
#include<math.h>

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
/*neu day khong phai la phuong trinh bac hai*/
if (a==0)
{
	printf("Loi : Khong phai phuong trinh bac hai");	
}
/*neu day la phuong trinh bac hai*/
else
{
	/*neu delta < 0*/
	if(d<0)
	{
		printf("phuong trinh vo nghiem");
	} 	
	/*neu delta = 0*/     
    if (d==0)
    {
	    printf("x = %f" , x );
    }
	/*neu delta > 0*/
    if (d>0)	
    {
	    printf("x1 = %.5f" , y);
        printf("\thoac x2 = %.5f", z);
    }	
}
    return 0;
}
    
	    
    
    
    
    
    
    


