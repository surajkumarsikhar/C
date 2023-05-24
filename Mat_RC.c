//Sum of each row and column

#include<stdio.h>
int main()
{
	int a[20][20],k,i,j,c,r,s=0;

	printf("Enter row and column of the matrix:\n");
	scanf("%d%d",&r,&c);
	{

		printf("Enter the elements to the matrix:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}

		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				s=s+a[i][j];

			}
			printf("Sum of row %d is %d.\n",i,s);
			s=0;
		}
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				s=s+a[i][j];
			}
			printf("Sum of column %d is %d.\n",i,s);
			s=0;
		}
	}

	return 0;
}

