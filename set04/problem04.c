#include<stdio.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
int main()
{
    int n;
    n=input_degree();
    
    float x,result,a[n];
    input_coefficients(n,a);
    x=input_x();
    result=evaluate_polynomial(n,a,x);
    output(n,a,x,result);
    return 0;
}
int input_degree()
{
    int x;
    printf("enter the degree:");
    scanf("%d",&x);
    return x;
}
void input_coefficients(int n, float a[n])
{
    printf("enter the coo-eficients:");
    for(int i=0;i<=n;i++)
    {
        scanf("%f",&a[i]);
    }
}
float input_x()
{
    float x;
    printf("enter the value of x:");
    scanf("%f",&x);
    return x;
}
float evaluate_polynomial(int n, float a[n], float x)
{
    float result=0;
    for(int i=0;i<=n;i++)
    {

        result=result+a[i];
        result=result*x;

    }
    result=result/x;
    return result;
}
void output(int n, float a[n], float x, float result)
{
    printf("the result of the polynomial is %f",result);
}