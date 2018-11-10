/*viet chuong trinh tim gia tri max trong mang 1 chieu*/
#include <stdio.h>

int main()
{
	int arr[5];

	for(int i = 0; i <= 5; i = i + 1)
	{
		printf("nhap gia tri thu %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	int max = arr[0];	
	
	for(int k = 0; k <= 5; k = k + 1)
	{
		if(max <= arr[k])
		{
			max = arr[k];
		}
	}
	printf("max = %d", max);
	return 0;
}
