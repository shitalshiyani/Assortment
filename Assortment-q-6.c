#include<stdio.h>

main()
{
	int i,j,r=3,c=3,sum=0,
	    matrix[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
	
	if (r==c)
	{
		printf("The matrix is\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("%d",matrix[i][j]);
			}
		}
		printf("\n");
	
	
	for (i=0;i<r;i++)
	{
		sum=sum+matrix[i][i];
	
	}
	
	printf("\n Main diagonal elements sum is=%d\n",sum);
	
    }
    else
    {
    	printf("matrix is not a square\n");
	}
}
