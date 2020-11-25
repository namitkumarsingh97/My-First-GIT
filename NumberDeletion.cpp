#include<stdio.h>

int main()
{
	int n,a[5],i,position;
	printf("Enter the elements in Array\n");
	for(i=0;i<5;i++)
	{scanf("%d",&a[i]);}
	
	printf("Enter the element to delete\n");
	scanf("\n%d",&n);
	
	for(i=0;i<5;i++)
	if(a[i]==n)
	{
		printf("Number found at Index: %d",i);
	    position=i;
		break;
	}
	
	for(i=0;i<position;i++)
	printf("\nNew Array: %d",a[i]);
	
	for(i=position+1;i<5;i++)
	printf("\nNew Array: %d",a[i]);
}

