/*chu so lon nhat trong 1 so nguyen*/
#include <stdio.h>

int main()
{
	int n;
	printf("nhap so: ");
	scanf("%d", &n);
	int check = n;
	int max = n % 10;
	while(check |= 0)
	{
		if(max <= check % 10)
		{
			max = check % 10;
		}
		check = (check - check % 10) / 10;
	}
	printf("chu so lon nhat = %d", max);
	return 0;
}
