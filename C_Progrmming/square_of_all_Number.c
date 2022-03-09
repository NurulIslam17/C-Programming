#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number  : ");
    scanf("%d",&n);
    printf("Sum of square series is : ");
    for(i=1;i<=n;i++)
    {
        printf(" %i^2+",i);
        sum=sum+i*i;
    }
    printf(" = %d",sum);
    getch();
}
