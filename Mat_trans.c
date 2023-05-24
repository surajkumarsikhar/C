//Find out the transpose of a matrix.

#include<stdio.h>
int main()
{
	int a[10][10],at[10][10];
	int i,j,c,r;

	printf("Enter the no. of rows:");
	scanf("%d",&r);
	printf("Enter the no. of columns:");
	scanf("%d",&c);

	printf("Enter data in the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			at[i][j]=a[j][i];
		}
	}

	printf("Transpose of the matrix is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%4d",at[i][j]);
		}
		printf("\n");

	}

	return 0;
}
