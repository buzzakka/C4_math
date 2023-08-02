#include "../s21_math.h"

long double s21_exp(double x) {
  long double res = 1;
  long double i = 1;
  long double add_value = 1;
  int flag_less_then_null = 0;
  if (x < 0) {
    x *= -1;
    flag_less_then_null = 1;
  }

  if (x == s21_INF) {
    res = s21_INF;
  } else if (x == -s21_INF) {
    res = 0;
  } else {
    while (s21_fabs(add_value) > s21_M_TOCH) {
      add_value *= x / i;
      i += 1;
      res += add_value;
      if (res > DBL_MAX) {
        res = s21_INF;
        break;
      }
    }
  }

  if (flag_less_then_null) {
    if (res > DBL_MAX) {
      res = 0;
    } else {
      res = 1. / res;
    }
  }
  return res;
}