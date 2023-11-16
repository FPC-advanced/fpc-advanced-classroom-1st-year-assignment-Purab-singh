#include<stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);
int main()
{
    int n,r,result;
    input_n_and_r(&n,&r);
    result=nCr(n,r);
    output(n,r,result);
    return 0;
}
void input_n_and_r(int *n,int *r)
{
    printf("enter the value of n and r:");
    scanf("%d %d",n,r);
}
int nCr(int n, int r)
{
    int result=0,i,nfact=1,rfact=1,nifact=1;
    for(i=1;i<=n;i++)
    {
        nfact=nfact*i;
    }
    for(i=1;i<=r;i++)
    {
        rfact=rfact*i;
    }
    for(i=1;i<=n-r;i++)
    {
        nifact=nifact*i;
    }
    result=(nfact/rfact)*(nifact);
    return result;

}
void output(int n,int r,int result)
{
    printf("the nCr of %d and %d is %d",n,r,result);
}