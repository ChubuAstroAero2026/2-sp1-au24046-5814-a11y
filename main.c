#include <stdio.h>

int main(void)
{
  double a;
  int b;

  scanf("%lf",&a);
  scanf("%d",&b);

  printf("%.*f\n", b,a );

  
  return 0;
}
