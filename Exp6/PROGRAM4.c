#include<stdio.h>
int main()
{
    int i,j,flag;
    char a[100],b[100],k[1];
    printf("Enter string: ");
    scanf("%[^\n]",a);
    i=0;j=0;
    while(a[j]!=0)
        j++;
    while(a[i]!=0)
    {
        if(a[i]==a[j-i-1])
            flag=1;
        else
            flag=0;
        i++;
    }
    if (flag==1)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}