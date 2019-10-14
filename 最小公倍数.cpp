#include<stdio.h>
int main()
{
	int temp,n,m,i,j;
	printf("输入两个数：");
	scanf("%d %d",&m,&n);
	i=m,j=n;
	while(m%n!=0)
	{
		temp=m%n;
		m=n;
		n=temp;
	}
	if(temp==1)
		printf("最小公倍数数为%d",i*j);
	else
		printf("最小公倍数%d",i*j/temp);
	return 0;
}
