#include<stdio.h>
#include<math.h>

int main()
{
	int All,English,Russian,None;
	scanf("%d %d %d %d",&All,&English,&Russian,&None);
	if(English>All||Russian>All||English*Russian<0)
		printf("�������ݴ����޷�����");
	else
		printf("���������%d��",English+Russian-All+None);
	return 0;
}
