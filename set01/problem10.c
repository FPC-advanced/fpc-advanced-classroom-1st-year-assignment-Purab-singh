#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char string1[100],string2[100];
    int result;
    input_two_strings(string1,string2);
    result=stringcompare(string1,string2);
    output(string1,string2,result);
}
void input_two_strings(char *string1, char *string2)
{
    printf("enter string 1");
    scanf("%s",string1);
    printf("enter string 2 ");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
    int i,result=0;
    for(i=0;string1[i]==string2[i];i++);

 
    result=string1[i]-string2[i];
    return result;
}
void output(char *string1, char *string2, int result)
{
    if(result==-122)
    {    
        printf("the strings are equal");


    }
    else if(result>=1)
    {
        printf("the largest string is %s",string1);
    }
    else if(result<=-1)
    {
        printf("the largest string is %s",string2);

        
    }

}
