#include<stdio.h>
int main()
{
    int number,i,reverse=0,digit,temp;
    printf("Enter the number : ");
    scanf("%d",&number);
    temp=number;
    while(number!=0)
    {
        digit=number%10;
        reverse=reverse*10+digit;
        number=number/10;
    }
    if(temp==reverse)
    {
         printf("\n%d is a palindrome number.",temp);
    }
    else
    {
       printf("\n%d is not a palindrome number.",temp);
    }


        getch();

}
