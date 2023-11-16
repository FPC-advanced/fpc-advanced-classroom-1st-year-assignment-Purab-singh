#include<stdio.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); 
void output(Camel c);
int main()
{
    Camel c;
    c=input();
    find_weight(&c);
    output(c);
    return 0;
}
Camel input()
{
    Camel x;
    printf("enter the radius height and length of the camel:");
    scanf("%f %f %f",&x.radius,&x.height,&x.length);
    return x; 
}
void find_weight(Camel *c)
{
    // pi*raduis^3*srt(he*len)
    float pi=3.14;
    c->weight=c->height*c->length;
    float x;
    x=c->weight;
    while(x*x- c->weight>0.00001)
    {
        x=0.5*(x+c->weight/x);
    }
    c->weight=x;
    c->weight=pi*(c->radius*c->radius*c->radius)*c->weight;
}
void output(Camel c)
{
    printf("the weight of the camle is %f",c.weight);
}