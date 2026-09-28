#include <stdio.h>

int main() 
{
    char a[100];
    int i=0,j;
    gets(a);
    for(j=0;a[j]!='\0';j++)
    i++;
    for(j=0;a[j]!='\0';j++)
    {
        if(a[j]>64 && a[j]<91)
            a[j]=a[j]+32;
        else if(a[j]>96 && a[j]<123)
            a[j]=a[j]-32;
    }
    printf("%s",a);
    printf("\nLeangth of string = %d",i);
    return 0;
}