#include <stdio.h>

int main(void)
{
  int a,b;
  scanf("%d %d",&a,&b);
  if (a+b<10)
  {
    printf("water");
  }
  else
  {
    if(a>b)
    {
      printf("tree");
    }
    else
    {
      printf("tea");
    }
  }
  return 0;
}
