#include<stdio.h>
 struct _triangle {
	float base, altitude, area;
};
typedef struct _triangle Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;

}
Triangle input_triangle()
{
    Triangle x;
    printf("ente the base and height of the triangle");
    scanf("%f %f",&x.base,&x.altitude);
    return x;

}
void find_area(Triangle *t)
{
    t->area=0;
    t->area=0.5*(t->base*t->altitude);
}
void output(Triangle t)
{
    printf("the area of the triangle is %f",t.area);
}