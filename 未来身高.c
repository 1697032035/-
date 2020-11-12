#include<stdio.h>
int main()
{
char sex;
char sports;
char diet;
float myheight;
float faheight;
float moheight;
printf("你是男孩(b)    还是女孩(g)?");
scanf("%1s",&sex);
printf("输入你爸爸的身高(cm):");
scanf("%f",&faheight); 
printf("输入你妈妈的身高(cm):");
scanf("%f",&moheight);
printf("你是否喜欢体育(Y/N)?"); 
scanf("%1s",&sports);
printf("是否有良好的饮食习惯(Y/N)?");
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
