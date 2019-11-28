#include<stdio.h>
#include<math.h>

int prime(int b);

int main()
{
	int num[100]={0},i,n,m=0,a=0,j=0,sum=0;
	for(i=101;i<10000;i++)
	{
		if(prime(i))
		{
			n=i;
			while(n) m+=n%10,n/=10;
			if(prime(m))
			{
				while(m) a+=pow(m%10,2),m/=10;
				if(prime(a))
					num[j]=i,j++;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d\n",num[i]);
		sum+=num[i];
	}
	float aver=sum/(j+1);
	printf("The average is %.0lf",aver);
	return 0;
 } 
 
 int prime(int b)
 {
 	int i;
 	for(i=2;i*i<b;i++)
 		if(!(b%i)) return 0;
 	return 1;
 }
