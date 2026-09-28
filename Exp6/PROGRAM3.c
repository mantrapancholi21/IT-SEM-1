#include <stdio.h>

int main() 
{
    char sent1[100],sent2[100];
    int i,j,count=0,flag=1,l1=0,l2=0,it=-1;
    printf("Enter string 1 : ");
    gets(sent1);
    printf("Enter string 2 : ");
    gets(sent2);
    for ( i = 0; sent1[i] != '\0';i++)
        l1++;
    printf("l1=%d\n",l1);
    for ( i = 0; sent2[i] != '\0'; i++)
        l2++;
    printf("l2=%d\n",l2);
    j=0;
    for(i=0;i<l1;i++)
    {
        while(j<l2)
        if(sent1[i]==sent2[j])
        {
            flag=1;
            count=i;
            it++;
            j++;
            if(it==(l2-1))
            {count=count-l2+1;}
                break;
        }
        else
        {
            flag=0;
            j=0;
            it=-1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\nsub string=");
        for(i=count;i<l1;i++)
        printf("%c",sent1[i]);
        printf("\ncount = %d",count);
    }
    
    return 0;
}