#include<stdio.h>
void main()
{    
	int i,j,n,l;
	int search;
  
    int a[50][50];
	printf("Enter size of square matrix \n");
	scanf("%d",&n);
	printf("\n Enter elements in array\n");

	l=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	printf("\n enter number to search is \n");

	scanf("%d",&search);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==search)
			{
			    printf(" poistion of number is %d row and %d column ",i+1,j+1);
			    l++;
		    }

		}
	printf("\n")	;
	}
	if(l==0)
	{
		printf("%d does not exist inside this matrix",search);
	}

}
