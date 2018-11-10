#include <stdio.h>

int main()
{
	int tong = 0;
	int n;
	printf("nhap n:");
	scanf("%d", n);
	for(int i = 1; i <=n; i = i + 1)
	{
		if(i %2 == 1)
		{
			tong = tong + i;
		}
	}
	printf("%d", tong);
	return 0;
}
