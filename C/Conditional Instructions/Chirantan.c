#include <stdio.h>
#include <conio.h>
int main()
{
  int a, b, c, p, max;
  printf("Enter the first integer :");
  scanf("%d", &a);
  printf("Enter the second integer :");
  scanf("%d", &b);
  printf("Enter the third integer :");
  scanf("%d", &c);
  printf("Enter the fourth integer :");
  scanf("%d", &p);
  if (a > b && a > c && a > p)
  {
    max = a;
  }
  else if (b > a && b > c && b > p)
  {
    max = b;
  }
  else if (c > a && c > b && c > p)
  {
    max = c;
  }
  else if (p > a && p > b && p > c)
  {
    max = p;
  }
  else
  {
    printf("The program is not valid");
  }
  if (max == a)
  {
    printf("%d is the highest number\n", a);
    if (b > c && b > p)
    {
      printf("%d is the second highest number\n", b);
      if (c > p)
      {
        printf("%d is the third highest number\n", c);
      }
      else
      {
        printf("%d is the third highest number\n", p);
      }
    }
    else if (c > b && c > p)
    {
      printf("%d is the second highest number\n", c);
      if (b > p)
      {
        printf("%d is the third highest number\n", b);
      }
      else
      {
        printf("%d is the third highest number\n", p);
      }
    }
    else if (p > b && p > c)
    {
      printf("%d is the second highest number\n", p);
      if (b > c)
      {
        printf("%d is the third highest number\n", b);
      }
      else
      {
        printf("%d is the third highest number\n", c);
      }
    }
  }
  if (max == b)
  {
    printf("%d is the highest number\n", b);
    if (a > c && a > p)
    {
      printf("%d is the second highest number\n", a);
      if (c > p)
      {
        printf("%d is the third highest number\n", c);
      }
      else
      {
        printf("%d is the third highest number\n", p);
      }
    }
    else if (c > a && c > p)
    {
      printf("%d is the second highest number\n", c);
      if (a > p)
      {
        printf("%d is the third highest number\n", a);
      }
      else
      {
        printf("%d is the third highest number\n", p);
      }
    }
    else if (p > a && p > c)
    {
      printf("%d is the second highest number\n", p);
      if (a > c)
      {
        printf("%d is the third highest number\n", a);
      }
      else
      {
        printf("%d is the third highest number\n", c);
      }
    }
  }
  if (max == c)
  {
    printf("%d is the highest number\n", c);
    if (b > a && b > p)
    {
      printf("%d is the second highest number\n", b);
      if (a > p)
      {
        printf("%d is the third highest number\n", a);
      }
      else
      {
        printf("%d is the third highest number\n", p);
      }
    }
    else if (a > b && a > p)
    {
      printf("%d is the second highest number\n", a);
      if (b > p)
      {
        printf("%d is the third highest number\n", b);
      }
      else
      {
        printf("%d is the third highest number\n", p);
      }
    }
    else if (p > b && p > a)
    {
      printf("%d is the second highest number\n", p);
      if (b > a)
      {
        printf("%d is the third highest number\n", b);
      }
      else
      {
        printf("%d is the third highest number\n", a);
      }
    }
  }
  if (max == p)
  {
    printf("%d is the highest number\n", p);
    if (b > c && b > a)
    {
      printf("%d is the second highest number\n", b);
      if (c > a)
      {
        printf("%d is the third highest number\n", c);
      }
      else
      {
        printf("%d is the third highest number\n", a);
      }
    }
    else if (c > b && c > a)
    {
      printf("%d is the second highest number\n", c);
      if (b > a)
      {
        printf("%d is the third highest number\n", b);
      }
      else
      {
        printf("%d is the third highest number\n", a);
      }
    }
    else if (a > b && a > c)
    {
      printf("%d is the second highest number\n", a);
      if (b > c)
      {
        printf("%d is the third highest number\n", b);
      }
      else
      {
        printf("%d is the third highest number\n", c);
      }
    }
  }

  return 0;
}