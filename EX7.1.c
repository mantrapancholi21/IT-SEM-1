#include<stdio.h>
int main()
{
    int i;
    float x[10],value,total=0;
    printf("Enter 10 real no. :");
    for(i=0;i<10;i++)
    {
        scanf("%f",&x[i]);

    }
    for(i=0;i<10;i++)
    {
        total=total+x[i]*x[i];
        printf("x[%2d]=%2.2f\n",i+1,x[i]);
    }
    printf("\nTotal=%.2f\n",total);

    return 0;
}