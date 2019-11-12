#include<cstdio>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;

int a[5],b[120],abool[5]={0},t=0; 

int abc(int n);
void allorder(int num,int n);

int main()
{
	int i,k=0;
	while(1)
	{
		for(i=0;i<5;i++) {scanf("%d",&a[i]);k=k+a[i];}
		if(!(k%3))  {printf("ERROR");break;}
		for(i=0;i<5;i++) 
		{
		abool[i]=1;
		allorder(a[i],4);
		abool[i]=0;
		} 
		sort(b,b+120);
		for(i=119;i>=0;i--)
		if(abc(b[i])) break;
		if(i>=0) {printf("%d",b[i]); break;}
		else {printf("ERROR"); break;}
	}
	return 0;
}

void allorder(int num,int n)
{
	int i;
	if(!n) {b[t]=num,t++;return ;}
	for(i=0;i<5;i++)
	{
		if(!abool[i])
		{
		abool[i]=1,num=num*10+a[i];
		allorder(num,n-1);
		abool[i]=0,num/=10;
		}		
	}
}

int abc(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	if(!n%(i*i))
	return 0;
	return 1;
}
