#include<stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);
int main()
{
    int n;
    n=input_size();
    int a[n],index;
    input_array(n,a);
    index=find_largest_index(n,a);
    output(index);
    return 0;
}
int input_size()
{
    int x;
    printf("enter the range: ");
    scanf("%d",&x);
    return x;

}
void input_array(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("enter the numbers: ");
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n])
{
    int largest,index;
    largest=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=largest)
        {
            largest=a[i];
            index=i;
        }
    }
    return index;
}
void output(int index)
{
    printf("the index of the largest number in the array is: %d",index);
}