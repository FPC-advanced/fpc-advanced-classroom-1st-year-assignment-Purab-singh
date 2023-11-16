#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b  );
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result1,Complex result);
int main()
{
    int n;
    n= get_n();
    Complex c[n],a,b,result,result1;

    a= input_complex();
    b=input_complex();
    input_n_complex(n,c);
    result=add(a,b);
    result1=add_n_complex(n,c);
    output(n,c,result1,result);
    return 0;


}
int get_n()
{
    int x;
    printf("enter the range ");
    scanf("%d",&x);
    return x;
}
Complex input_complex()
{
    Complex x;
    printf("enter the complex number");
    scanf("%f %f",&x.real,&x.imaginary);
    return x;
}
void input_n_complex(int n, Complex c[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the  array of complex number \n ");
        scanf("%f %f",&c[i].real,&c[i].imaginary);
    }
}
Complex add(Complex a, Complex b)
{
    Complex x;
    x.real=a.real+b.real;
    x.imaginary=a.imaginary+b.imaginary;
    return x;

}
Complex add_n_complex(int n, Complex c[n])
{
    Complex x;
    x.real=0;
    x.imaginary=0;

    int i;
    for(i=0;i<n;i++)
    {
        x.real=x.real+c[i].real;
        x.imaginary=x.imaginary+c[i].imaginary;
    }
    return x;
}
void output(int n, Complex c[n], Complex result1,Complex result)
{
    printf("output for array of complex number is :%f + %fi\n",result1.real,result1.imaginary);
    printf("ouput for 2 complex number is %f + %fi ",result.real,result.imaginary);
}

