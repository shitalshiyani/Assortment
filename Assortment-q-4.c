#include<stdio.h>

main()
{
	int i,j,a[3][3],b[3][3],sum[3][3];
	
	printf("Enter elements of 1st matrix\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter elements of 2nd matrix\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("sum of matrices\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
