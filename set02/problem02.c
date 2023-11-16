#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
int input_side()
{
    int x;
    printf("enter the sides");
    scanf("%d",&x);
    return x;
}
int check_scalene(int a,int b,int c)
{
    int scalene;
    if(a==b||b==c||c==a)
    {
        scalene =1;
    }
    else
    {
        scalene =2;
    }
    return scalene;
}
void output(int a,int b,int c,int isscalene)
{
    if (isscalene==1)
    {
        printf("the triangle is not scalene");

    }
    else
    {
        printf("the triangle is scalene");
    }
}