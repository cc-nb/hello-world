#include<stdio.h>
#include<math.h>

int main()
{
	int All,English,Russian,None;
	scanf("%d %d %d %d",&All,&English,&Russian,&None);
	if(English>All||Russian>All||English*Russian<0)
		printf("输入数据错误，无法计算");
	else
		printf("都会的人有%d个",English+Russian-All+None);
	return 0;
}
