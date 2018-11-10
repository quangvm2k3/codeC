#include <stdio.h>
#include <stdlib.h>

int main()
{
	int p, q;
	printf("tao mat khau: ");
	scanf("%d", &p);
	while(1)
	{
		printf("\nnhap mat khau: ");
		scanf("%d", &q);
		if(q == p)
		{
			printf("mat khau dung");
			break;
	    }
	    else
	    {
	    	printf("mat khau sai");
		}
	}
}
