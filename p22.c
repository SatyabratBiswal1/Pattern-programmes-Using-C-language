#include<stdio.h>
int main()
{
	int i;
	int j;
	int k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=2;j++)
		{
			if(j<=i+1)
			{
				printf(" %d",k);
				k++;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
