#include<stdio.h>
#include<string.h>
void input_string(char *string);
int count_words(char *string);
void output(char *string, int no_words);
int main()
{
    char string[100];
    int no_words;
    input_string(string);
    no_words=count_words(string);
    output(string,no_words);
    return 0;
}
void input_string(char *string)
{
    printf("enter the string");
    gets(string);
}
int count_words(char *string)
{
    const char a[2]=" ";
    int x=0;
    char *token;
    token=strtok(string,a);
    while(token!= NULL)
    {
        x=x+1;
        token=strtok(NULL,a);

    }
    return x;

}
void output(char *string, int no_words)
{
    printf("the string contains %d words",no_words);
}
