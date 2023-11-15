//! Module - 01 : input / variable / data type

#include <stdio.h>

int main()
{
  /*
  ? First code print

  printf("Hello World");
  */

  /*
  ? Declare variable and print the value

  ! 1
  int asru = 100;
  printf("%d", asru);

  ! 2
  int asruIslam = 100, karim = 300;
  printf("%d %d", karim, asruIslam);

  ! 3
  float clo = 4.5464;
  printf("%f\n", clo);
  printf("%0.2f", clo);

  ! 4
  char ami = 'AH';
  printf("%c", ami);

  */

  /*
  ? Take Input

  ! 1
  int rahim;
  scanf("%d", &rahim);
  printf("%d", rahim);

  ! 2
  int rahim, karim;
  scanf("%d %d", &rahim, &karim);
  printf("%d %d", rahim, karim);

  ! 3
  int rahim, karim;
  float b;
  char c;
  scanf("%d %f %c", &rahim, &b, &c);
  printf("%d %0.2f %c", rahim, b, c);
  */

  /*
  ? Take input number with percentage

  ! 1 : with variable char using
  int a, b;
  char p;
  scanf("%d%c %d%c", &a,&p, &b, &p);
  printf("%d%% %d%%", a, b);

  ! 2 : tell scanf() to take input like => we say take percentage (%%).
  int a, b;
  scanf("%d%% %d%%", &a, &b);
  printf("%d%% %d%%", a, b);
  */

  /*
  ? Data Type Limitation
  */

  return 0;
}