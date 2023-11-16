#include<stdio.h>
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);
int main()
{
    int n;
    n=input_n();
    Fraction f[n],sum;
    input_n_fractions(n,f);
    sum=add_n_fractions(n,f);
    output(n,f,sum);
    return 0;
}
int input_n()
{
    int x;
    printf("enter the range:");
    scanf("%d",&x);
    return x;
}
void input_n_fractions(int n, Fraction f[n])
{
    int i;
    for( i=0;i<n;i++)
    {
        printf("enter the fractions:");
        scanf("%d %d",&f[i].num,&f[i].den);
    }
}
Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction x;
    x.den=0;
    x.num=0;
    int i;
    for( i=1;i<n;i++)
    {
        f[i].num=(f[i-1].num*f[i].den) +(f[i].num*f[i-1].den);
        f[i].den=f[i].den*f[i-1].den;
    }
    int largest,smallest;
    largest=f[n-1].num;
    smallest=f[n-1].den;
    if(f[n-1].den>largest)
    {
        largest=f[n-1].den;
        smallest=f[n-1].num;
    }
    int gcd=1;
    int trial;
    for(trial=1;trial<=smallest;trial++)
    {
        if(smallest%trial==0&&largest%trial==0)
        {
            gcd=trial;
        }
    }
    f[n-1].den=f[n-1].den/gcd;
    f[n-1].num=f[n-1].num/gcd;

    return f[n-1];
}
void output(int n,Fraction f[n],Fraction sum)
{
    printf("the sum of the fractions is %d/%d",sum.num,sum.den);
}
