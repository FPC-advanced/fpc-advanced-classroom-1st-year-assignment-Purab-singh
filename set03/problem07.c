#include<stdio.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
int main()
{
    Point x;
    Line l;
    l=input_line();
    find_length(&l);
    output(l);
    return 0;

}
Point input_point()
{
    Point x;
    printf("enter the cooddinates");
    scanf("%f %f",&x.x,&x.y);
    return x;
}
Line input_line()
{
    Line l;
    l.p1=input_point(); 
    l.p2=input_point();
    return l;
}
void find_length(Line *l)
{
     float total;
    total=((l->p2.x*l->p2.x))-((l->p1.x*l->p1.x)) + ((l->p2.y*l->p2.y)-(l->p1.y*l->p1.y));
    float x,small=0.0001;
    x=total;
    while(x*x-total>small)
    {
        x=0.5*(x+total/x);
    }
    l->distance=x;
}
void output(Line l)
{
    printf("the distaance between the points (%f, %f) and (%f ,%f) is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}