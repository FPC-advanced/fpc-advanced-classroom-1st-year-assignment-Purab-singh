#include<stdio.h>
int input(int x);
float borga_X(int x);
void output(int x, float result);
int main()
{
    int x;
    float result;
    x=input( x);
    result=borga_X(x);
    output(x,result);
    return 0;
}
int input(int x)
{
    int y;
    printf("enter the number:");
    scanf("%d",&y);
    return y;
}
float borga_X(int x)
{
    // `1 + (x^1)/3! + (x^2)/5! + (x^3)/7! +
    float result=1,temp_result=1;
    float fact=1,temp=1;
    int i;
    for(i=3;i<=100;i=i+2)
    {
        for(int j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        temp=temp*x;
        // result=temp_result;
        // printf("%d\n",temp);
        temp_result=temp/fact;
        // printf("%f\n",temp_result);
        if(temp_result<0.000001)
        {
           return result; 
        }
        else
        {
            result=result+temp_result;
            fact=1;
 
              
        }

 
    }
return result;
}
void output(int x, float result)
{
    printf("%f",result);
}















