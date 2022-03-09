#include<stdio.h>
int main()
{
    int number,reverse,i,r;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("Reverse of %d is : ",number);

   while(number!=0)
    {
        reverse=number%10;
        printf("%d",reverse);
        number=number/10;
        r=reverse;
    }
    printf("\n%d",r);
    getch();
}
