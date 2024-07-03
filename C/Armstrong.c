#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  printf("enter the no of elements in the array ");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    printf("enter the element no %d ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++)
  {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    originalNum = arr[i];

    for (originalNum = arr[i]; originalNum != 0; ++n)
    {
      originalNum /= 10;
    }

    for (originalNum = arr[i]; originalNum != 0; originalNum /= 10)
    {
      remainder = originalNum % 10;

      result += pow(remainder, n);
    }

    if ((int)result == arr[i])
    {
      printf("%d is an Armstrong number \t", arr[i]);
      printf("%d is the index of the number in the array\n", i);
    }
    else
      printf("%d is not an Armstrong number \n", arr[i]);
  }
  return 0;
}