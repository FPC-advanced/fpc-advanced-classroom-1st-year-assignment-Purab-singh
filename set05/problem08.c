#include<stdio.h>
typedef struct _camel {
    float radius, height, length, weight;
} Camel;
int input_n();
void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);
int main()
{
    int n;
    n=input_n();
    Camel c[n];
    float truck_weight,total_weight;
    input(n,c,&truck_weight);
    find_camel_weight(n,c);
    total_weight=compute_total_weight(n,c,truck_weight);
    output(total_weight);
    return 0;

}
int input_n()
{
    int x;
    printf("enter the range:");
    scanf("%d",&x);
    return x;
}
void input(int n,Camel c[n],float *truck_weight)
{

    for(int i=0;i<n;i++)
    {
        printf("enter the camles radius ,height and lenght:");
        scanf("%f %f %f",&c[i].radius,&c[i].height,&c[i].length);
    }
    printf("enter the trucks weight:");
    scanf("%f",truck_weight);

}
 void find_camel_weight(int n,Camel c[n])
 {
        // pi*raduis^3*srt(he*len)
    float pi=3.14;
    for(int i=0;i<n;i++)
    {
        c[i].radius=c[i].radius*c[i].radius*c[i].radius;
        c[i].weight=c[i].height*c[i].length;
        float x=c[i].weight;
        while(x*x-c[i].weight>0.00001)
        {
            x=0.5*(x+c[i].weight/x);
        }
        c[i].weight=x;
        c[i].weight=pi*c[i].radius*c[i].weight;

    }
    float total=0;
    for(int i=0;i<n;i++)
    {
        total=total+c[i].weight;
        
    }
    c->weight=total;

 }
 float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float total;
    total=truck_weight+c->weight;
    return total;
}
void output(float total_weight)
{
    printf("the total weight is %f",total_weight);
}