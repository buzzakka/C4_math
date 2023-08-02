#include "../s21_math.h"

long double s21_sqrt_get_right(double x) {
  long double res = (s21_fabs(x) < 1) ? 1 : x;
  return res;
}

long double s21_sqrt(double x) {
  long double left = 0;
  long double right = s21_sqrt_get_right(x);
  long double middle = (right - left) / 2;

  if (x >= 0) {
    while ((middle - left) > s21_pow(10, -9)) {
      if (middle * middle > x) {
        right = middle;
      } else {
        left = middle;
      }
      middle = (right + left) / 2;
    }
  } else {
    middle = s21_NaN;
  }
  return middle;
}