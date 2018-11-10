#include <stdio.h>
    
int main()
{
	int tong = 0;
	for(int i = 1; i <= 100 ; i = i + 1) 
	{                                                                   
		tong = tong + i;
		printf("\n%d", tong);
	}
	return 0;
}
