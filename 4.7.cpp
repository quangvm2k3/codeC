#include <stdio.h>
    
int main()
{
	int tong = 0;
	for(int i = 0; i <= 100 ; i = i + 1) 
	{                                                                   
		if(i %2 == 0)
		{
			tong = tong + i;		
		}
	}
	printf("\n%d", tong);
	return 0;
}
