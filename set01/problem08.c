#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
int main()
{
    int n;
    n=input_array_size();
    int a[n],sum;
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}
int input_array_size()
{
    int x;
    printf("enter the size");
    scanf("%d",&x);
    return x;

}
void input_array(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the numbers");
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n,int a[n])
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int n,int a[n],int sum)
{
    printf("the sum of ");
    for(int i=0;i<n-1;i++)
    {
        printf("%d +",a[i]);
    }
    printf("%d = %d",a[n-1],sum);
}