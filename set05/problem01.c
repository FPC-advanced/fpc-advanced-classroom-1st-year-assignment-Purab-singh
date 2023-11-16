#include<stdio.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
int main()
{
    Point a,b;
    float res;
    a=input();
    b=input();
    dist(a,b,&res);
    output(a,b,res);
    return 0;
}

Point input()
{
    Point x;
    printf("enter the coordinates:");
    scanf("%f %f",&x.x,&x.y);
    return x;
}
void dist(Point a, Point b, float *res)
{
    *res=((b.x-a.x)*(b.x-a.y))+((b.y-a.y)*(b.y-a.y));
    float x;
    x=*res;
    while(x*x - *res>0.00001)
    {
        x=0.5*(x+ *res/x);

    }
    *res=x;

}
void output(Point a, Point b, float res)
{
    printf("the distance between the points is: %f",res);
}