
#include<stdio.h>
int main()
{
    int number,i,result=0;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("All positive divisor are(Except %d) : ",number);
    for(i=1; i<number; i++)
    {
        if (number%i==0)
        {
            printf("  %d",i);
            result=result+i;
        }
    }
    printf("\nTotal sum of postive divisor : %d",result);
    if(result==number)
        printf("\n%d is perfect number.",number);
    else
    {
        printf("\n%d is not perfect number.",number);
    }

    getch();
}
