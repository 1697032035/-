#include<stdio.h>
 void main()
{
	int a,b,n;
	printf("**************************************\n");
	printf("    ��ӭʹ��С�ͼ�����                \n");
	printf("     ���ʦ������̩                                 \n");
	printf("*****************************************       \n");
	printf("    1���ӷ�                                  \n");
	printf("    2.����                                  \n");
	printf("    3.����                                  \n");
	printf("    4.�˷�                                  \n");
	printf("    5.�˳�                                  \n");
	printf("**************************************\n");
	printf("\n");
	printf("��ѡ��\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("��������������");scanf("%d%d",&a,&b);printf("��������ǣ�%d",a+b);break; 
		case 2:printf("��������������");scanf("%d%d",&a,&b);printf("��������ǣ�%d",a-b);break; 
		case 3:printf("��������������");scanf("%d%d",&a,&b);printf("��������ǣ�%6.2f",(float)a/b);break; 
		case 4:printf("��������������");scanf("%d%d",&a,&b);printf("��������ǣ�%d",a*b);break; 
		case 5:exit(0); 
	 } 
	
 } 
