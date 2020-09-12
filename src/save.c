#include <stdio.h>

unsigned long long primenumbers[100000000];
unsigned long long iter = 0;

_Bool save_init(void) {
  for (unsigned long long i = 0; i < 100000000; i++) {
    primenumbers[i] = 0;
  }
                        
  return 1;
}

_Bool save_save(unsigned long long number) {
  primenumbers[iter] = number;
  iter++;
  return 1;
}


_Bool save_print(void) {
  unsigned long long loop;

  for(loop = 0; loop < 100000000; loop++) {
    if (primenumbers[loop] != 0llu) {
      printf("%llu ", primenumbers[loop]);
    }
  }
  
  return 1;
}

