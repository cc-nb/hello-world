#include<stdio.h>
#include<math.h>
int main()
{
	int a[5],i,m=0,exchange,c=5;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	while(c) 
	{
		for(i=1;i<c;i++)
			{
			if(a[i-1]>a[i])
				{
				exchange=a[i];
				a[i]=a[i-1];
				a[i-1]=exchange;
				}
			}
		c--;
	}
	for(i=0;i<5;i++)
		m=m+a[i]*pow(10,i);
	printf("The max num is %d",m);
	return 0;	
} 
