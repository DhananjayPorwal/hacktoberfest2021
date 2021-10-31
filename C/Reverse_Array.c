// program to reverse array 
#include<stdio.h>
main()
{
	int i,a[100],b[100],n,j;
	
	printf("How many Elements You Enter : ");
	scanf("%d",&n);
	// Using for loop
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
        //  j = n-1;
	
	for(i=0,j = n-1; i<n,j>=0; i++,j--)
	{
		b[j] = a[i];	
	  //  j--;
	}
	
	printf("\nAfter Reverse Array \n");
	
	for(i=0; i<n; i++)
	{
		a[i] = b[i];
		printf("%d ",a[i]);		
	}
	
	
	
	
}
