#include <stdio.h>
#include <math.h>

int main(void)
{
  int a,b,c,d;
  scanf("%d",&a);
  b = a/100;
  c = fmod(a,100)/10;
  d = fmod(a,10);
  if (pow(b,3)+pow(c,3)+pow(d,3)==a){
    printf("YES");
  }
  else{
    printf("NO");
  }

  return 0;
}
