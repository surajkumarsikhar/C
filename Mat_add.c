//Add two matrix

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,r1,c1,r2,c2;

	printf("Enter the no. of row of 1st matrix:");
	scanf("%d",&r1);
	printf("Enter the no. of column of 1st matrix:");
	scanf("%d",&c1);

	printf("\n\n");
	printf("Enter the no. of row of 2nd matrix:");
	scanf("%d",&r2);
	printf("Enter the no. of column of 2nd matrix:");
	scanf("%d",&c2);

	if(r1==r2 && c1==c2)
	{

		printf("Enter data in first matrix:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}

		printf("Enter data in second Matrix:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}

		printf("After addition the matrix is\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ",a[i][j]+b[i][j]);
			}
			printf("\n");
		}
	}

	else
	{
		printf("Addition is not possible.\n");
	}

	return 0;
}
