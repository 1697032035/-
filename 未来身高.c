#include<stdio.h>
int main()
{
char sex;
char sports;
char diet;
float myheight;
float faheight;
float moheight;
printf("�����к�(b)    ����Ů��(g)?");
scanf("%1s",&sex);
printf("������ְֵ����(cm):");
scanf("%f",&faheight); 
printf("��������������(cm):");
scanf("%f",&moheight);
printf("���Ƿ�ϲ������(Y/N)?"); 
scanf("%1s",&sports);
printf("�Ƿ������õ���ʳϰ��(Y/N)?");
scanf("%1s",&diet);
  if(sex=='b'||sex=='B') 
   myheight=(faheight+moheight)*0.54;
    if(sex=='g'||sex=='G') 
     myheight=(faheight*0.923+moheight)/2.0;
      if(sports=='Y'||sports=='y') 
       myheight=myheight*(1+0.023);
        if(diet=='Y'||diet=='y') 
         myheight=myheight*(1+0.015);
printf("Your future height will be%6.2f(cm)\n",myheight);
return 0;
}
