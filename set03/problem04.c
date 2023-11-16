#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}
int input()
{
    int x;
    printf("enter the postion");
    scanf("%d",&x);
    return x;
}
int find_fibo(int n)
{
    int a[n],fibo;
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        fibo=a[i];
    }
    return fibo;
}
void output(int n, int fibo)
{
    printf("the value at postion %d is %d",n,fibo);
}