#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
    int n;
    n=input_array_size();
    int a[n],sum;
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output( sum);
    return 0;
}
int input_array_size()
{
    int x;
    printf("enter the array size");
    scanf("%d",&x);
    return x;
}
void input_array(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the numbers: ");
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n,int a[n])
{
    int sum=0,j,i,x=0;
    for(i=0;i<n;i++)
    {
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                sum=sum+a[i];
                break;
            }
            
        }
        // if(x>2)
        //    {
        //     sum=sum+a[i];
        //    }
        // x=0;
       
    }
    return sum;

    
}
void output(int sum)
{
    printf("the sum of the complex number is %d",sum);
}