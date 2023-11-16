#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
    float x1,x2,x3,y1,y2,y3;
    int result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the point 1 ");
    scanf("%f %f",x1,y1);
    printf("enter the point 2 ");
    scanf("%f %f",x2,y2);
    printf("enter the point 3 ");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    int result=0;
  
    if (((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2!=0)
    {
        result=1;
    }
    return result;

}
void output(float x1, float y1, float x2, float y2,float x3, float y3,int result)


{
    if(result==1)
    {
    

        printf("the points (%f,%f),(%f,%f) and (%f,%f) forms a triangle",x1,y1,x2,y2,x3,y3);
    }
else
    {
        printf("the points (%f,%f),(%f,%f) and (%f,%f)  do not form a triangle",x1,y1,x2,y2,x3,y3);
    }
}
