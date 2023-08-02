#include "../s21_math.h"

long double s21_acos(double x) {
  long double res = 0;
  if (s21_fabs(x) < 1 && x != 0) {
    res = (s21_M_PI / 2) - s21_asin(x);
  } else if (x == 0) {
    res = s21_M_PI / 2;
  } else if (s21_fabs(x) == 1) {
    res = (x == -1) ? s21_M_PI : 0;
  } else {
    res = s21_NaN;
  }
  return res;
}