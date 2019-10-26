#include<stdio.h>
int main()
{
int i,n,c,b;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(c=n;c!=0;c--)
{
	for(i=1;i<c;i++)
		if(a[i-1]>a[i])
		{
		b=a[i];
		a[i]=a[i-1];
		a[i-1]=b;
		}
}
for(i=0;i<n;i++)
	printf("%d ",a[i]);
return 0;
}
