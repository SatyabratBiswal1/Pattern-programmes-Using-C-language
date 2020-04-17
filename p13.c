#include<stdio.h>
int main()
{
		int i,j,k,rows,n;
	printf("enter the number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		k=i;
		for(j=1;j<=(2*rows)-1;j++)
		{
			n=rows+1;
		if(j>=n-k&&j<=(n-1)+k)
		{
		printf("%d",k);
		j<rows?k++:k--;
		}
		else
		printf(" ");
		}
		printf("\n");
	}
}
