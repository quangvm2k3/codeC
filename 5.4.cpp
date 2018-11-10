
#include <stdio.h>

int main()
{
	printf("ve cay thong");
	int n,h;
	printf("\nnhap so tang cay thong: ");
	scanf("%d", &n);
	printf("nhap chieu cao tang dau tien cay thong: ");
	scanf("%d", &h);
	/*tan*/
	/*tang*/
	for(int i = 1; i <= n; i = i + 1)
	{
		/*dong*/
		for(int j = 1; j <= 2 * i + 1; j = j + 1)
		{
			/*cach*/
			for(int k = 1; k <=  (h + 2 * ( n - 1)) - 1; k = k + 1)
			{
				printf(" ");
			}
			/*in "*"*/
			for(int l = 1; l <= 2 * j - 1; l = l + 1)
			{
				printf("*");
			}
		printf("\n");	
		}
	}
	/*chan*/
	if((h * n) %2 == 0)
		{
			for (int t = 1; t <= (h * n) / 2; t = t + 1)
			{
				for(int s = 1; s <= h - 2; s = s + 1)
				{
					printf(" ");
				}
				printf("***");
				printf("\n");
			}
		}
	if((h * n) %2 == 1)
		{
			for (int t = 1; t <= ((h * n) - 1)/ 2; t = t + 1)
			{
				for(int s = 1; s <= h - 2; s = s + 1)
				{
		 			printf(" ");
				}
				printf("***");
				printf("\n");
			}
		}		
	
	return 0;
}
