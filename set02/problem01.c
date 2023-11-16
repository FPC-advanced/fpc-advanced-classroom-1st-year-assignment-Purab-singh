#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
    float height,base,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;


}
void input(float *base, float *height)
{
    printf("enter the base and height of the triangle \n ");
    scanf("%f %f",base,height);
}
void find_area(float base , float height, float *area)
{
    *area = 0.5 *( base * height);
}
void output(float base, float height, float area)
{
    printf("the area of tringle whose base and height are %f and %f is %f",base,height,area);
}