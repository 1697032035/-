#include<stdio.h>
int main()
{
	int score;
	printf("������һ��ѧ���ĳɼ���");
	scanf("%d",&score);
	if(score<60) 
	printf("������");
	else if(score<70) 
	printf("����");
	else if(score<80) 
	printf("�е�");
	else if(score<90) 
	printf("����");
	else if(score<=100) 
	printf("����");
	return 0;
 } 
