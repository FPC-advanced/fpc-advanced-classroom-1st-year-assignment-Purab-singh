#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum);
int main()
{
    Fraction f1,f2,f3,sum;
    f1=input_fraction();
    f2=input_fraction();
    sum=add_fractions(f1,f2);
    
    output(f1,f2,f3,sum);
    return 0;
}
Fraction input_fraction()
{
    Fraction x;
    printf("enter  the fraction: ");
    scanf("%d %d",&x.num,&x.den);
    return x;
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.num=(f1.num*f2.den)+(f2.num*f1.den);
    sum.den=f1.den*f2.den;
    int gcd=1,smallest,largest,result=0;
    smallest=sum.num;
    largest=sum.den;
    if(sum.den<smallest)
    {
        smallest=sum.den;
        largest=sum.num;
    }
    for(gcd=1;gcd<=smallest;gcd++)
    {
        if(smallest%gcd==0&&largest%gcd==0)
        {
            result=gcd;
        }
    }
    sum.num=sum.num/result;
    sum.den=sum.den/result;




    return sum;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
{
    printf("%d/%d +%d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}