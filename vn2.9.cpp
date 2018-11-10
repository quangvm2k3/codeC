#include <stdio.h>

int main()
{
	float i;
	printf("nhap so diem hoc sinh : ");
	scanf("%f", &i);
	if (i >= 9 & i <= 10)
	{
		printf("Xep loai: xuat sac");
	}
	if (i >= 8 & i < 9)
	{
		printf("Xep loai: gioi");
	}
	if (i >= 7 & i < 8)
	{
		printf("Xep loai: kha");
	}
	if (i >= 6 & i < 7)
	{
		printf("Xep loai: TB- kha");
	}
	if (i >= 5 & i < 6)
	{
		printf("Xep loai: Trung binh");
    }
	if (i<5 & i >= 0)	
	{   	
	    printf("Xep loai: Yeu");
	}
	if(i > 10 & i < 0)
	{
		printf("loi diem khong hop le");
	}
	return 0;
    
}


