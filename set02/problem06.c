#include<stdio.h>
void input_string(char *a);
void str_reverse(char *a);
void output(char *a);
int main()
{
    char a[100],rev_str[100],reverse_a[100];
    input_string(a);
    str_reverse(a);
    output(a);
    return 0;
}
void input_string(char *a)
{
    printf("enter the string");
    scanf("%s",a);
}
void str_reverse(char *a)
{
    int i,end,j;
    char temp;
    for(i=1;a[i]!='\0';i++);
    j=i+1;
    end=i-1;
    
        
    j=j/2;
    for(i=0;i<j;i++)
        {
            temp=a[i];
            a[i]=a[end];
            a[end]=temp;
            end--;



        }
        
    
    

        
}

        
        

    
    
    


void output(char *a)
{
    printf("the reversed string is %s",a);
}