#include<stdio.h>
 struct _triangle {
	float base, altitude, area;
}; 
typedef  struct _triangle Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
int main()
{
    int n;
    n=input_n();
    Triangle t[n],smallest;
    input_n_triangles(n,t);
    
    find_n_areas(n,t);
    smallest=find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;
}
int input_n()
{
    int x;
    printf("enter the range");
    scanf("%d",&x);
    return x;

}
void input_n_triangles(int n,Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the base and height of the triangles\n");
        scanf("%f %f",&t[i].base,&t[i].altitude);

    }

}
void find_n_areas(int n,Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        t[i].area= 0.5*t[i].base*t[i].altitude;

    }
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
    Triangle smallest;
    smallest.area=t[0].area;
    for(int i=1;i<n;i++)
    {
        if(t[i].area<smallest.area)
        {
            smallest.area=t[i].area;
        }

    }
    return smallest;
}
void output(int n,Triangle t[n],Triangle smallest)
{
    printf("the smallest area amongst the triangles is %f",smallest.area);
}
