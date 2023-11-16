#include<stdio.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
    float x1,x2,y1,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("enter point 1");
    scanf("%f %f",x1,y1);
    printf("enter point 2");
    scanf("%f %f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float total;
    total=((x2*x2)-(x1*x1)) + ((y2*y2)-(y1*y1));
    float x,small=0.0001;
    x=total;
    while(x*x-total>small)
    {
        x=0.5*(x+total/x);
    }
    return x;

}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("the distance between the points (%f, %f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}
