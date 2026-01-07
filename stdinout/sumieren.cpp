#include <stdio.h>

int main(void)
{
  int n = 0;
  int sum = 0;

  scanf("%d", &n);

  int x[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x[i]); 

    sum += x[i];
  }

  printf("%d\n", sum);

  return 0;
}
