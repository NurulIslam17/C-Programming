#include<stdio.h>
int main()
{
    int n,i,countEven=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("All even number from 0 to %d are : ",n);

    for(i=0; i<=n; i=i+2)
    {
        printf(" %d",i);
        countEven=countEven+1;
    }
    printf("\nTotal even number from 0 to %d is : ",n);
    printf("%d",countEven);
    getch();

}

