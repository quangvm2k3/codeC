#include <stdio.h>

int main()
{
	int arr[4];
	for(int i = 0; i <= 4; i = i + 1)
	{
		printf("nhap so thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	
	for(int k = 0; k <= 4; k = k + 1)
	{
		if(max <= arr[k])
		{
			max = arr[k];
		}
	}
	int max2 = 0;
	
	for(int j = 0; j <= 4; j = j + 1)
	{
		if(max > arr[j] & max2 < arr[j])
		{
			max2 = arr[j];
		}
	}
	printf("So lon thu hai = %d", max2);
	return 0;
}
