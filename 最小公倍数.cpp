#include<stdio.h>
int main()
{
	int temp,n,m,i,j;
	printf("������������");
	scanf("%d %d",&m,&n);
	i=m,j=n;
	while(m%n!=0)
	{
		temp=m%n;
		m=n;
		n=temp;
	}
	if(temp==1)
		printf("��С��������Ϊ%d",i*j);
	else
		printf("��С������%d",i*j/temp);
	return 0;
}
