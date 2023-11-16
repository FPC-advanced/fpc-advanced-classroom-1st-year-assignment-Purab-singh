#include<stdio.h>
void input_string(char*string);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
int main()
{
    char a[100],b[100],string[100],substring[100];
    int index;
    input_string(string);
    index=sub_str_index(string,substring);
    output(string,substring,index);
    return 0;
}
void input_string(char *string)
{
    printf("enter the string");
    scanf("%s",string);
}
int sub_str_index(char *string,char *substring)
{
    int i=0,j=0,index=-1,end=0;
    printf("enter the word to be found ");
    scanf("%s",substring);
    for(j=0;substring[j]!='\0';j++);
    end=j-1;
    j=0;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==substring[j])
        {
            
            index++;
            j++;
            if(end==index)
            {
                index=i-index;
                return index;
            }
        
        }
   

    }  
 
   return -1;
    

    
}
void output(char*string, char *substring, int index)
{
    if(index==-1)
    {
        printf("the word does not exist");

    }
    else
    {
        printf("the word exists in the string at the index %d ",index);
    }
}
