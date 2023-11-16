#include<stdio.h>
void input(char *name);
int has_nice_name(char *name);
void output(int res);
int main()
{
    char name[100];
    input(&name);
    int res;
    res=has_nice_name(&name);
    output(res);
    return 0;
}
void input(char *name)
{
    printf("enter the camels name:");
    scanf("%s",name);
}
int has_nice_name(char *name)
{
    int i=0,v=0,c=0,res;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    if(v>=2&&c>=2)
    {
        res=1;
    }
    else
    {
        res=2;
    }
    return res;
}
void output(int res)
{
    if(res==1)
    {
        printf("the camle has a good name");
    }
    else
    {
        printf("the camel has  a bad name");
    }
}
