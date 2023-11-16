#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);
int main()
{
    float radius,height,length;
    input_camel_details(&radius, &height, &length);
    int mood;
    mood=find_mood(radius,height,length);
    output(radius,height,length,mood);
    return 0;

}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("enter the camles radius height length:");
    scanf("%f %f %f",radius,height,length);
}
int find_mood(float radius, float height, float length)
{
//      - sick when its `stomach_radius` is less than `height` and less than `length`
//  - happy when its `height` is less than `length` and less than `stomach_radius`.
//  - tense when its `length` is less than `height` and `stomach_radius`.
    int mood;
    if(radius<height &&radius<length)
    {
        mood=1;
    }
    else if(height<length && height<radius)
    {
        mood =2;
    }
    else
    {
        mood =3;
    }
return mood;
}
void output(float radius, float height, float length, int mood)
{
    if(mood==1)
    {
        printf("the camel is sick");
    }
    else if(mood==2)
    {
        printf("the camel is happy");
    }
    else
    {
        printf("the camel is tensed");
    }
}
