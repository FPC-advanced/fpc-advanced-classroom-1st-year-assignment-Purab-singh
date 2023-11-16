#include<stdio.h>
void input_string(char *a);
void str_reverse(char *a, char *rev_str);
void output(char *a, char *rev_str);
int main()
{
    char a[100],rev_str[100],reverse_a[100];
    input_string(a);
    str_reverse(a,rev_str);
    output(a,rev_str);
    return 0;
}
void input_string(char *a)
{
    printf("enter the string");
    scanf("%s",a);
}
void str_reverse(char *a,char *rev_str)
{
    int i,end,j;
    
    for(i=1;a[i]!='\0';i++);
    end=i-1;
    for(i=0,j=0;a[i]!='\0';j++,i++)
    {
        rev_str[j]=a[end];
        
        end=end-1;
    }
    rev_str[i]='\0';
    

}
void output(char *a,char *rev_str)
{
    printf("the reversed string is %s",rev_str);
}