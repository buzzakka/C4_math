#include "../s21_math.h"

long double s21_fact(int n) {
  long double fact = 1;
  if (n < 0)
    fact = s21_NaN;
  else {
    for (int i = 1; i <= n; ++i) {
      fact *= i;
    }
  }
  return fact;
}