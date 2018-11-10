/*tinh tong bibh phuong cac so le tu 1 -> n*/
#include <stdio.h>

int main()
{
	int tong = 0;
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i = i + 1)
	{
		tong = tong + i * i;
	}
	printf("%d", tong);
	return 0; 
}
