#include<stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
int main()
{
    int n;
    n=input_n();
    int a[n];
    float avg;
    input(n,a);
    avg=odd_average(n,a);
    output(avg);
    return 0;
}
int input_n()
{
    int x;
    printf("enter the range:");
    scanf("%d",&x);
    return x;
}
void input(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the numbers:");
        scanf("%d",&a[i]);
    }
}
float odd_average(int n,int a[n])
{
    int sum=0,i;
    float avg=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            avg=avg+a[i];
        }
    }
    avg=(avg/sum)*10;
    return avg;
}
void output(float avg)
{
    printf("the average of the odd numers is %f",avg);
}