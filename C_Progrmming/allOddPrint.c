#include<stdio.h>
int main()
{
  int n,i,countOdd=0;
  printf("Enter the number : ");
  scanf("%d",&n);
  printf("All even number from 0 to %d are : ",n);

  for(i=1;i<=n;i=i+2)
  {
      printf(" %d",i);
      countOdd=countOdd+1;
  }
printf("\nTotal odd number from 0 to %d is : ",n);
printf("%d",countOdd);
  getch();

}
