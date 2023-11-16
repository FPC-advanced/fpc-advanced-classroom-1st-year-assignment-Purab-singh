#include<stdio.h>
typedef struct {
    float num, den;
} Fraction;
void input(Fraction *f1,Fraction *f2,Fraction *f3);
void compare(Fraction f1,Fraction f2, Fraction f3 ,int *result_num ,int *result_den);
void output(Fraction f1,Fraction f2,Fraction f3,int result_num ,int result_den) ;
int main()
{
    Fraction f1,f2,f3;
    int result_num,result_den;
    input(&f1,&f2,&f3);
    compare(f1,f2,f3,&result_num,&result_den);
    output(f1,f2,f3,result_num ,result_den);
    return 0;

}
void input(Fraction *f1,Fraction *f2,Fraction *f3)
{
    printf("enter fraction 1");
    scanf("%f %f",&f1->num,&f1->den);
    printf("enter fraction 2");
    scanf("%f %f",&f2->num,&f2->den);
    printf("enter fraction 3");
    scanf("%f %f",&f3->num,&f3->den);    
}
void compare(Fraction f1,Fraction f2, Fraction f3,int *result_num ,int *result_den)
{
    if(f1.num/f1.den<=f2.num/f2.den&&f1.num/f1.den<=f3.num/f3.den)
    {
        *result_num=f1.num;
        *result_den=f1.den;
    }
    else if(f2.num/f2.den<=f1.num/f1.den&&f2.num/f2.den<=f3.num/f3.den)
    {
        *result_num=f2.num;
        *result_den=f2.den;

    }
    else
    {
        *result_num=f3.num;
        *result_den=f3.den;
    }
       
}
void output(Fraction f1,Fraction f2,Fraction f3,int result_num ,int result_den) 
{
    printf("the smallest fraction  is %d /%d",result_num,result_den);
}