#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
int main()
{
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight=find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("enter the camles radius , height and length:");
    scanf("%f %f %f",radius,height,length);
}
float find_weight(float radius, float height, float length)
{
    float weight;
    float pi=3.14;
    float x;
    x=height*length;
    while(x*x-height*length>0.0001)
    {
        x=0.5*(x+height*length/x);
    }
    weight=x;
    weight=pi*(radius*radius*radius)*weight;
    return weight;

}
void output(float radius, float height, float length, float weight)
{
    printf("the weight of the camel is %f",weight);
}