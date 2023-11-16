#include<stdio.h>

int input_array_size();
void int_array(int n, int a[n]);
int erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n],int sum);
int main()
{
    int n,sum=0;
    n=input_array_size();
    
    int a[n];
    int_array(n,a);
    sum=erotosthenes_sieve(n,a);
    output(n,a,sum);
    return 0;
}
int input_array_size()
{
    int x;
    printf("enter the range:");
    scanf("%d",&x);
    x;
    return x;
}
void int_array(int n, int a[n])
{
    int i;
    
    for(i=2;i<=n+1;i++)
    {
        a[i]=i;
    }
}
int erotosthenes_sieve(int n, int a[n])
{
    int sum=0;
    for(int i=2;i<=n;i++)
    {
        // if(a[i]==n)
        // {
        //     return sum;
        // }
        

        if(a[i]!=0)
        {
            sum=sum+a[i];

            
            for(int j=2;j<=n;j++)
            {
                if(i*j>n)
                {

                }
                else
                    {
                        a[j*i]=0;
                    }
            }
        }


    }
    

return sum;
 }
    

void output(int n, int a[n],int sum)
{
    printf("the   prime numbers till %d  are",n);
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=0)
        {
            printf(" %d ",a[i]);
        }
    }
}