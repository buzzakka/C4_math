#include "../s21_math.h"

long double s21_asin(double x) {
  long double res = 0;
  if (s21_fabs(x) == s21_M_SQRT1_2) {
    res = (x < 0) ? -s21_M_PI / 4 : s21_M_PI / 4;
  } else if (s21_fabs(x) < 1) {
    res = s21_atan(x / (s21_sqrt(1 - s21_pow(x, 2))));
  } else if (s21_fabs(x) == 1) {
    res = (x == 1) ? s21_M_PI / 2 : -s21_M_PI / 2;
  } else {
    res = s21_NaN;
  }
  return res;
}