#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;


}
int input_number()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    return x;
}
int is_composite(int n)
{
    int x=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            x++;
        }
    }
    return x;
    
}
void output(int n,int result)
{
    if(result>2)
    {
        printf("the number is composite");

    }
    else
    {
        printf("the number is not composite");
    }
}