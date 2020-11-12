#include<stdio.h>
int main()
{
	int score;
	printf("请输入一个学生的成绩：");
	scanf("%d",&score);
	if(score<60) 
	printf("不及格");
	else if(score<70) 
	printf("及格");
	else if(score<80) 
	printf("中等");
	else if(score<90) 
	printf("良好");
	else if(score<=100) 
	printf("优秀");
	return 0;
 } 
