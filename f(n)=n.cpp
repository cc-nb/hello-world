#include<stdio.h>

int main()
{
	int n=2,m,i,j=0,k;
	while(1)
	{
		for(i=1;i<=n;i++)
		{
			m=i;
			while(m)
			{
			k=m%10;
			if(k==1) j++;
			m=(m-k)/10;
			}
		}
		printf("%d %d\n",j,n);
		if(j==n) break;
		n++,j=0;
	}
	printf("%d",n);
	return 0;
}
