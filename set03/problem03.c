#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main()
{
    int n,result;
    n=input_number();
    result=is_prime(n);
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
int is_prime(int n)
{
    int i,result=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            result++;
        }
    }
    return result;
}
void output(int n,int result)
{
    if(result==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}