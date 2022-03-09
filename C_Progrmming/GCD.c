#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("Enter number 2 : ");
    scanf("%d",&n2);
    computeGCD(n1,n2);

}
int computeGCD(int a,int b)
{
if b==0;
    return  a
        else:
                return computeGCD(b,a%b)
        }

