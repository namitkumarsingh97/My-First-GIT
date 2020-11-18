#include<stdio.h>
int main()
{
	int a[4],i,j,flag=0;
	printf("Enter the elements in Array\n");
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<4;i++)
	{
		flag=0;
		for(j=0;j<4;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
				flag=1;
				break;
			}
			
		}	
		    if(flag==1)
			{
				printf("Repeating element found: %d",a[i]);
				break;
		    }
	}
}

