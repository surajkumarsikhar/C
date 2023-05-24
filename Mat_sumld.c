//Sum of left diagonal

#include<stdio.h>
int main()
{
	int a[20][20],i,j,c,r,s=0;

	printf("Enter row and column of the matrix:\n");
	scanf("%d%d",&r,&c);

	if(r==c)
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
				if(i==j)
					s=s+a[i][j];
			}
		}

		printf("Sum of the left diagonal is %d.\n",s);


	}

	else
	{
		printf("Matrix must be a Square Matrix.\n");
	}

	return 0;
}

