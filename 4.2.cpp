/*nhap so nguyen n tinh tong cac gia tri le tu 0 -> n*/
#include <stdio.h>

int main()
{
	int n;
	int tong = 0;
	printf("nhap n:");
	scanf("%d", &n);
	for( int le; le <= n;   )
	{
		
		if(le %2 == 1)
		{
			tong = tong + le;
			printf("%d", tong);
		}
		if(le %2 == 0)
		{
			printf("%d", tong);
		}
	}
	return 0;
}

