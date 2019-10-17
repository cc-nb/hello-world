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
		printf("两数互质");
	else
		printf("两数不互质");
	return 0;
}
