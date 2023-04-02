#include<stdio.h>

main()
{
	int r,c,i,j,matrix[10][10],transpose[10][10];
	
	printf("Enter raws and columns=\n");
	scanf("%d%d",&r,&c);
	
	printf("Enter elements of matrix=\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		transpose[j][i]=matrix[i][j];
	}
	
	printf("transpose of the matrix=\n");
	for (i=0;i<c;i++)
	{
		for (j=0;j<r;j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
}
