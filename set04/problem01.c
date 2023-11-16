#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
int main()
{
    int num1,den1,num2,den2,res_num,res_den;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
    return 0;
}
void input(int *num1,int *den1,int *num2,int *den2)
{
    printf("enter fraction 1 ");
    scanf("%d %d",num1,den1);
    printf("enter fraction 2");
    scanf("%d %d",num2,den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    if(den1==den2)
    {
        *res_num=num1+num2;
        *res_den=den1;
    }
    else 
    {
        int small=den1,larg=den2;
        if(den1>den2)
        {
            small=den2;
            larg=den1;
        }
        if(larg%small==0)
        {   
            num1=(larg/small)*num1;
            *res_num=num1+num2;
            *res_den=larg;
        }
        else
        {
            num1=num1*den2;
            num2=num2*den1;
            *res_num=num1+num2;
            *res_den=larg*small;
        }
        

    }
}
 void output(num1,den1,num2,den2,res_num,res_den)
  {
    printf("%d /%d + %d/%d = %d/%d ",num1,den1,num2,den2,res_num,res_den);
  }