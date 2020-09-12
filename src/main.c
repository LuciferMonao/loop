/* main.c
 *
 * Copyright 2020 Lucifer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//Standart Libraries
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdint.h>
#include <time.h>

// File Imports
#include <init.c>
#include <calc.c>
#include <save.c>




int main(void) {
  clock_t programm_start = clock();
  
  
  init_init();
  save_init();
  unsigned long long max = 191699999;
  _Bool printed = 0;
  
  clock_t calculation_start = clock();
  for (unsigned long long number = 2; number < max; number++) {
    
    _Bool solution = calc_test(number);
    if (solution == 1) {
      save_save(number);
    }
    if (number / max > 0.5) {
      if (printed == 0) {
        printed = 1;
        printf("50%%");
      }
    }
  }
  clock_t calculation_finish = clock();

  
  clock_t print_start = clock();
  save_print();
  clock_t programm_finish = clock();
  
  
  int programm = (programm_finish - programm_start) * 1000 / CLOCKS_PER_SEC;
  int calculation = (calculation_finish - calculation_start) * 1000 / CLOCKS_PER_SEC;
  int printing = (programm_finish - print_start) * 1000 / CLOCKS_PER_SEC;
  
  
  printf("Times:\nProgramm start to finish: %d\nCalculation start to finish: %d\nPrinting from start to finish: %d\n", programm, calculation,printing);
  return 0;
}
