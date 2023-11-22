#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
int input()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a,int b)
{
    int small=a,gcd,result=0;
    if(a>b)
    {
        small=b;
    }
    for(gcd=1;gcd<=small;gcd++)
    {
        if(a%gcd==0&&b%gcd==0)
        {
            result=gcd;
            
        }
    }
    return result;


    

}
void output(int a,int b,int gcd)
{
    printf("the command factor of %d and %d is %d",a,b,gcd);
}