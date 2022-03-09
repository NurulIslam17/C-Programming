#include<stdio.h>
int main()
{
  int decimal,i,rem,binary=" ";
  printf("Enter decimal number : ");
  scanf("%d",&decimal);

  while(decimal!=0)
  {
      rem=decimal%2;
       printf("%d",rem);

      decimal=decimal/2;
  }
  //printf("%d",rem);

  getch();
}
