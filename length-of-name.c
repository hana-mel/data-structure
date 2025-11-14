#include<stdio.h>
#include<string.h>

void main()
{
    char name[100];
    int count = 0;
    char *p;
    printf("Enter name: ");
    fgets(name,sizeof(name),stdin);
    p = name;
    while(*p != '\0' && *p != '\n')
    {
        if(*p != ' ')
        {
            count++;
        }
        p++;
    }
    printf("The length of string is: %d",count);
}
