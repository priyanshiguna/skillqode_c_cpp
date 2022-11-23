#include <stdio.h>
int main()
{
  int x, i, n;
  int a[10]={11,12,13,14,15,16,17,18,19,20};
   for (i = 0; i < n; i++)
    printf("\n %d - %u ",a[i],&a[i]);
  //scanf("%d", &n);

  //printf("Enter %d integer(s)\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    //x=16;
 // printf("Enter a number to search\n");
 // scanf("%d", &x);
    x=16;
  for (i = 0; i < n; i++)
  {
    if (a[i] == x)    /* If required element is found */
    {
      printf("%d : at position %d.\n", x, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", x);

  return i+1;
}