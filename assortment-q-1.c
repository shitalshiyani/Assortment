#include<stdio.h>

main()
{
	int i,n,a[100];
	printf("Enter value of array=");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf(" Negative Elements in array=\n");
	for (i=0;i<n;i++)
	{
		if (a[i]<0)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
	
	
}
