#include <math.h>

_Bool calc_test(unsigned long long number) {
  _Bool prim = 1;
  for (unsigned long long n = 2; n < round(number / n);) {
    //printf("%llu-%llu\n", test, n);
    if (number % n == 0) {
      return 0;
    }
    n++;
  }
  return 1;
}    
    
  
