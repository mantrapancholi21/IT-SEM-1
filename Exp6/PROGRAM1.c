#include <stdio.h>

int main() 
{
    char sent1[100],sent2[100];
    int i,j,count=0,l1=0,l2=0;
    printf("Enter string 1 : ");
    gets(sent1);
    printf("Enter string 2 : ");
    gets(sent2);
    i=0;
    while(sent1[i] != '\0' && sent2[i] != '\0')
    {
        if(sent1[i]==sent2[j])
        {
            count++;
        }
        i++;j++;
    }
    for(i=0;sent1[i] != '\0' && sent1[i] != '\n';i++)
        l1++;
    for(i=0;sent2[i]!='\0' && sent2[i]!='\n';i++)
        l2++;
    if(l1==l2 && l1==count)
        printf("same");
    else
        printf("not same");
    return 0;
}