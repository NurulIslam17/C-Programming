#include<stdio.h>
int main()
{
    int number,i,first=0,second=1,sum=0;
    printf("Enter the series length : ");
    scanf("%d",&number);
    sum=first+second;
    printf("%d %d",first,second);
    for(i=1;i<number-1;i++)
    {
      sum=first+second;
      printf(" %d",sum);
      first=second;
      second=sum;
    }
    getch();
}
