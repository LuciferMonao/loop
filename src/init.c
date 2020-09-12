#include <limits.h>
#include <stdio.h>

_Bool init_init(void) {
  printf("min. Char Wert    : %d\n", SCHAR_MIN);
  printf("min. Char Wert    : +%d\n", SCHAR_MAX);
  printf("min. Char Wert    : %d\n", SHRT_MIN);
  printf("min. Char Wert    : +%d\n", SHRT_MAX);
  printf("min. Char Wert    : %d\n", INT_MIN);
  printf("min. Char Wert    : +%d\n", INT_MAX);
  printf("min. Char Wert    : %ld\n", LONG_MIN);
  printf("min. Char Wert    : +%ld\n", LONG_MAX);
  printf("min. Char Wert    : %lld\n", LLONG_MIN);
  printf("min. Char Wert    : +%lld\n", LLONG_MIN);
  
  return 1;
}

