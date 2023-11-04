//To convert from degrees to radians, multiply the number of degrees by π/180.
#include <stdio.h>
#include <math.h>
int main(void) {
  int init_deg, fin_deg, inc_deg;
  double rad;
  printf("Enter initial degree: ");
  scanf("%d", &init_deg);
  printf("Enter final degree: ");
  scanf("%d", &fin_deg);
  printf("Enter increment: ");
  scanf("%d", &inc_deg);
  printf("Degrees\tSin()\tCos()\n");
  for (int i = init_deg; i <= fin_deg; i += inc_deg)
    printf("%d\t\t%5.2lf\t%5.2lf\n", i, sin(i * M_PI / 180),cos(i * M_PI / 180));
    
  return 0;
}
