#include "../s21_math.h"

long double s21_floor(double x) {
  long double res;

  if (!s21_isfin(x) || s21_isnan(x)) {
    res = x;
  } else {
    long long int int_x = (long long int)x;
    if (x > 0) {
      res = int_x;
    } else {
      res = ((double)int_x == x) ? int_x : int_x - 1;
    }
  }

  return res;
}