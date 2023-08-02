#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = 0;
  if (s21_fabs(x) < s21_fabs(y)) {
    res = x;
  } else if (s21_isinf(x) || s21_isnan(x) || s21_isnan(y) || (y == 0)) {
    res = s21_NaN;
  } else {
    long long int mod = (long double)x / (long double)y;
    res = (long double)x - (long double)y * mod;
  }
  return res;
}