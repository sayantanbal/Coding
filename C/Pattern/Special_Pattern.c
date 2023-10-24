/*         1
         6 2
      10 7 3
   13 11 8 4
15 14 12 9 5*/


#include<stdio.h>

int main()
{
  int i,j,k;
  for(i=1;i<=5;i++)
  {
    for(j=5;j>=1;j--)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    } 
    printf("\n");
  }
  return 0;
}