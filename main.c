#include <stdio.h>

int main(void)
{

  int a;
  scanf("%d", &a);

  if (a % 3 == 0)
  {
    printf("CS");
  }
  else if (a % 5 == 0)
  {
    printf("1714");
  }
  else if (a % 5 == 0 && a % 3 == 0)
  {
    printf("CS1714");
  }
  else
  {
    printf("ERROR");
  }

  return 0;
}
