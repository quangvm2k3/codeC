#include <stdio.h>

int main()
{
	int n;
	printf("nhap n:");
	scanf("%d", &n);
	int tong = 0;
	for(int i = 0; i <= n;i = i + 1)
		{
			if (i %2 == 1)
			{
				tong = tong + i;
			}
		}
	printf("%d", tong);
	return 0;	
}
